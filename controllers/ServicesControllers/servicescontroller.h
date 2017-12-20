#ifndef SERVICESCONTROLLER_H
#define SERVICESCONTROLLER_H

#include <QObject>
#include "models/servicelistmodel.h"
#include "models/Filters/filters.h"
#include "models/Company/companyserviceslistmodel.h"

class ServicesController : public QObject
{
    Q_OBJECT
public:
    static ServicesController* getInstance();
    Q_INVOKABLE void loadServices(ServiceListModel* dist);
    Q_INVOKABLE void loadCompanyServices(CompanyServicesListModel* dist, int companyId);

public slots:

private:
    ServicesController(QObject *parent = nullptr);
};

#endif // SERVICESCONTROLLER_H
