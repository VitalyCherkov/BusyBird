#include "companyserviceshort.h"

CompanyServiceShort::CompanyServiceShort(int id,
                                         const QString &label,
                                         const QString &lowerPrice,
                                         const QString &topPrice,
                                         const QString &categoryName) :
    BaseServiceShort(id, label, lowerPrice, topPrice),
    m_categoryName(categoryName)
{

}

const QString& CompanyServiceShort::categoryName() const
{
    return m_categoryName;
}

void CompanyServiceShort::setCategoryName(const QString& categoryName)
{
    m_categoryName = categoryName;
}
