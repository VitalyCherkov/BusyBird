#ifndef COMPANYSERVICE_H
#define COMPANYSERVICE_H

#include <QMetaType>
#include <QString>
#include "models/Service/baseserviceshort.h"

class CompanyServiceShort : public BaseServiceShort
{
public:
    CompanyServiceShort();

    const QString& categoryName() const;
    void setCategoryName(const QString &categoryName);

private:
    QString m_categoryName;
};

Q_DECLARE_METATYPE(CompanyServiceShort)

#endif // COMPANYSERVICE_H
