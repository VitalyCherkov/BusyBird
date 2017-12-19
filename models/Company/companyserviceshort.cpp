#include "companyserviceshort.h"

CompanyServiceShort::CompanyServiceShort()
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
