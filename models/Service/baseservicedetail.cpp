#include "baseservicedetail.h"

BaseServiceDetail::BaseServiceDetail(QObject *parent) :
    QObject(parent),
    m_price(Q_NULLPTR),
    m_isFavourite(false)
{

}

const QString& BaseServiceDetail::getLabel() const
{
    return m_label;
}

void BaseServiceDetail::setLabel(const QString& label)
{
    if(m_label != label){
        m_label = label;
        emit labelChanged(m_label);
    }
}

const QString& BaseServiceDetail::getDescription() const
{
    return m_description;
}

void BaseServiceDetail::setDescription(const QString& description)
{
    if(m_description != description) {
        m_description = description;
        emit descriptionChanged(m_description);
    }
}

const QString& BaseServiceDetail::getCategoryName() const
{
    return m_categoryName;
}

void BaseServiceDetail::setCategoryName(const QString& categoryName)
{
    if(m_categoryName != categoryName) {
        m_categoryName = categoryName;
        emit categoryNameChanged(m_categoryName);
    }
}

unsigned int  BaseServiceDetail::getCategoryId() const
{
    return m_categoryId;
}

void BaseServiceDetail::setCategoryId(unsigned int categoryId)
{
    if(m_categoryId != categoryId) {
        m_categoryId = categoryId;
        emit categoryIdChanged(m_categoryId);
    }
}

PriceInfo *BaseServiceDetail::getPrice() const
{
    return m_price;
}

void BaseServiceDetail::setPrice(PriceInfo* price)
{
    if(price && price != m_price) {
        if(m_price) m_price->setParent(Q_NULLPTR);
        price->setParent(this);
        m_price = price;
        emit priceChanged(m_price);
    }
}

bool BaseServiceDetail::getIsFavourite() const
{
    return m_isFavourite;
}

void BaseServiceDetail::setIsFavourite(bool isFavourite)
{
    if(isFavourite != m_isFavourite) {
        m_isFavourite = isFavourite;
        emit isFavouriteChanged(m_isFavourite);
    }
}

void BaseServiceDetail::changeIsFavourite()
{
    m_isFavourite = !m_isFavourite;
    emit isFavouriteChanged(m_isFavourite);
}

