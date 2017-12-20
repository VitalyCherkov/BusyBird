#ifndef SERVICECOMPANYDETAIL_H
#define SERVICECOMPANYDETAIL_H

#include "shortcompanyinfo.h"
#include "Service/baseservicedetail.h"

class ServiceDetail : public BaseServiceDetail
{
    Q_OBJECT
    Q_PROPERTY(ShortCompanyInfo* company READ getCompany NOTIFY companyChanged)
public:
    ServiceDetail(QObject* parent = Q_NULLPTR);

    ShortCompanyInfo* getCompany() const;
    void setCompany(ShortCompanyInfo* company);

signals:
    void companyChanged(ShortCompanyInfo*);

private:
    ShortCompanyInfo* m_company;
};

#endif // SERVICECOMPANYDETAIL_H
