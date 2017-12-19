#ifndef COMPANY_H
#define COMPANY_H

#include <QObject>
#include <QVector>
#include <QString>
#include "models/shortcompanyinfo.h"

class Company : public ShortCompanyInfo
{
    Q_OBJECT
public:
    Company(QObject* parent);
private:
    //LegalInformation* legalInformation;
    //ServicesListModel* services;
    //ContactsListModel* contacts;
};

#endif // COMPANY_H
