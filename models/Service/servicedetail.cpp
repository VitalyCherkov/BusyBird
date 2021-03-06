#include "servicedetail.h"

ServiceDetail::ServiceDetail(QObject *parent) :
    BaseServiceDetail(parent),
    m_company(Q_NULLPTR)
{

}
CompanyShort* ServiceDetail::getCompany() const
{
    return m_company;
}

void ServiceDetail::setCompany(CompanyShort* company)
{
    if(company && company != m_company) {
        if(m_company) m_company->setParent(Q_NULLPTR);
        company->setParent(this);
        m_company = company;
        emit companyChanged(m_company);
    }
}
