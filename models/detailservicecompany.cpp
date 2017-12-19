#include "detailservicecompany.h"

DetailServiceCompany::DetailServiceCompany(QObject *parent) :
    QObject(parent),
    m_price(Q_NULLPTR),
    m_company(Q_NULLPTR),
    m_isFavourite(false)
{

}

const QString& DetailServiceCompany::getLabel() const
{
    return m_label;
}

void DetailServiceCompany::setLabel(const QString &label)
{
    if(m_label != label){
        m_label = label;
        emit labelChanged(m_label);
    }
}

const QString& DetailServiceCompany::getDescription() const
{
    return m_description;
}

void DetailServiceCompany::setDescription(const QString& description)
{
    if(m_description != description) {
        m_description = description;
        emit descriptionChanged(m_description);
    }
}

const QString& DetailServiceCompany::getCategoryName() const
{
    return m_categoryName;
}

void DetailServiceCompany::setCategoryName(const QString& categoryName)
{
    if(m_categoryName != categoryName) {
        m_categoryName = categoryName;
        emit categoryNameChanged(m_categoryName);
    }
}

unsigned int  DetailServiceCompany::getCategoryId() const
{
    return m_categoryId;
}

void DetailServiceCompany::setCategoryId(unsigned int categoryId)
{
    if(m_categoryId != categoryId) {
        m_categoryId = categoryId;
        emit categoryIdChanged(m_categoryId);
    }
}

ServicePriceInfo *DetailServiceCompany::getPrice() const
{
    return m_price;
}

void DetailServiceCompany::setPrice(ServicePriceInfo* price)
{
    if(price && price != m_price) {
        if(m_price) m_price->setParent(Q_NULLPTR);
        price->setParent(this);
        m_price = price;
        emit priceChanged(m_price);
    }
}

ShortCompanyInfo* DetailServiceCompany::getCompany() const
{
    return m_company;
}

void DetailServiceCompany::setCompany(ShortCompanyInfo* company)
{
    if(company && company != m_company) {
        if(m_company) m_company->setParent(Q_NULLPTR);
        company->setParent(this);
        m_company = company;
        emit companyChanged(m_company);
    }
}

bool DetailServiceCompany::getIsFavourite() const
{
    return m_isFavourite;
}

void DetailServiceCompany::setIsFavourite(bool isFavourite)
{
    if(isFavourite != m_isFavourite) {
        m_isFavourite = isFavourite;
        emit isFavouriteChanged(m_isFavourite);
    }
}

void DetailServiceCompany::changeIsFavourite()
{
    m_isFavourite = !m_isFavourite;
    emit isFavouriteChanged(m_isFavourite);
}

