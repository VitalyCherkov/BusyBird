#ifndef COMPANYSERVICE_H
#define COMPANYSERVICE_H

#include <QMetaType>
#include <QString>
#include "models/Service/baseserviceshort.h"

class CompanyServiceShort : public BaseServiceShort
{
public:
    CompanyServiceShort(int id = 0, const QString& label = "", const QString& lowerPrice = "",
                        const QString& topPrice = "", const QString& categoryName = "");

    const QString& categoryName() const;
    void setCategoryName(const QString &categoryName);

private:
    QString m_categoryName;
};

Q_DECLARE_METATYPE(CompanyServiceShort)

#endif // COMPANYSERVICE_H
