#ifndef COMPANY_H
#define COMPANY_H

#include <QObject>
#include <QVector>
#include <QString>
#include "models/shortcompanyinfo.h"
#include "legalinformation.h"
#include "companyserviceslistmodel.h"

class Company : public ShortCompanyInfo
{
    Q_OBJECT
    Q_PROPERTY(LegalInformation legalInformation READ getLegalInformation NOTIFY legalInformationChanged)
    Q_PROPERTY(CompanyServicesListModel services READ getServices NOTIFY servicesChanged)
public:
    Company(QObject* parent = Q_NULLPTR);

    LegalInformation *getLegalInformation() const;
    void setLegalInformation(LegalInformation* legalInformation);

    CompanyServicesListModel *getServices() const;
    void setServices(CompanyServicesListModel* services);

signals:
    void legalInformationChanged(LegalInformation*);
    void servicesChanged(CompanyServicesListModel*);

private:
    LegalInformation* m_legalInformation;
    CompanyServicesListModel* m_services;
    //ContactsListModel* contacts;
};

#endif // COMPANY_H
