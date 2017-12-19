#include "company.h"


Company::Company(QObject *parent) :
    ShortCompanyInfo(parent),
    m_legalInformation(Q_NULLPTR),
    m_services(Q_NULLPTR)
{

}

LegalInformation* Company::getLegalInformation() const
{
    return m_legalInformation;
}

void Company::setLegalInformation(LegalInformation* legalInformation)
{
    if(legalInformation) {
        if(m_legalInformation)
            m_legalInformation->setParent(Q_NULLPTR);
        legalInformation->setParent(this);
        m_legalInformation = legalInformation;
        emit legalInformationChanged(m_legalInformation);
    }
}

CompanyServicesListModel* Company::getServices() const
{
    return m_services;
}

void Company::setServices(CompanyServicesListModel* services)
{
    if(services) {
        if(m_services)
            m_services->setParent(Q_NULLPTR);
        services->setParent(this);
        m_services = services;
        emit servicesChanged(m_services);
    }
}
