#ifndef SERVICECOMPANYDETAIL_H
#define SERVICECOMPANYDETAIL_H

#include "models/Company/companyshort.h"
#include "baseservicedetail.h"

class ServiceDetail : public BaseServiceDetail
{
    Q_OBJECT
    Q_PROPERTY(CompanyShort* company READ getCompany NOTIFY companyChanged)
public:
    ServiceDetail(QObject* parent = Q_NULLPTR);

    CompanyShort* getCompany() const;
    void setCompany(CompanyShort* company);

signals:
    void companyChanged(CompanyShort*);

private:
    CompanyShort* m_company;
};

#endif // SERVICECOMPANYDETAIL_H
