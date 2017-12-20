#include "companyserviceshort.h"

CompanyServiceShort::CompanyServiceShort(int id,
                                         const QString &label,
                                         int lowerPrice,
                                         int topPrice,
                                         const QString &categoryName,
                                         int categoryId) :
    BaseServiceShort(id, label, lowerPrice, topPrice),
    m_categoryName(categoryName),
    m_categoryId(categoryId)
{

}

const QString& CompanyServiceShort::getCategoryName() const
{
    return m_categoryName;
}

void CompanyServiceShort::setCategoryName(const QString& categoryName)
{
    m_categoryName = categoryName;
}

int CompanyServiceShort::getCategoryId() const
{
    return m_categoryId;
}

void CompanyServiceShort::setCategoryId(int categoryId)
{
    m_categoryId = categoryId;
}
