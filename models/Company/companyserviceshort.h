#ifndef COMPANYSERVICE_H
#define COMPANYSERVICE_H

#include <QMetaType>
#include <QString>
#include "models/Service/baseserviceshort.h"

class CompanyServiceShort : public BaseServiceShort
{
public:
    CompanyServiceShort(int id = 0, const QString& label = "", int lowerPrice = 0,
                        int topPrice = 0, const QString& categoryName = "", int categoryId = 0);

    const QString& getCategoryName() const;
    void setCategoryName(const QString &categoryName);

    int getCategoryId() const;
    void setCategoryId(int categoryId);

private:
    QString m_categoryName;
    int m_categoryId;
};

Q_DECLARE_METATYPE(CompanyServiceShort)

#endif // COMPANYSERVICE_H
