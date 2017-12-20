#ifndef SERVICEDETAILCONTROLLER_H
#define SERVICEDETAILCONTROLLER_H

#include <QObject>
#include "models/Service/baseservicedetail.h"
#include "models/Service/servicedetail.h"

class ServiceDetailController : public  QObject
{
    Q_OBJECT
public:
    static ServiceDetailController* getInstance();
    Q_INVOKABLE void loadServiceDetail(ServiceDetail* dist, int serviceId);
    Q_INVOKABLE void loadCompanyServiceDetail(BaseServiceDetail* dist, int serviceId);

private:
    ServiceDetailController(QObject* parent = Q_NULLPTR);

};

#endif // SERVICEDETAILCONTROLLER_H
