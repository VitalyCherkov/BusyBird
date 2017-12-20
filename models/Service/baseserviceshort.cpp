#include "baseserviceshort.h"

BaseServiceShort::BaseServiceShort(int id, const QString& label, int lowerPrice, int topPrice) :
    m_id(id),
    m_label(label),
    m_lowerPrice(lowerPrice),
    m_topPrice(topPrice)
{ }

int BaseServiceShort::getId() const
{
    return m_id;
}

void BaseServiceShort::setId(int id)
{
    m_id = id;
}

const QString& BaseServiceShort::getLabel() const
{
    return m_label;
}

void BaseServiceShort::setLabel(const QString& label)
{
    m_label = label;
}

int BaseServiceShort::getLowerPrice() const
{
    return m_lowerPrice;
}

void BaseServiceShort::setLowerPrice(int lowerPrice)
{
    m_lowerPrice = lowerPrice;
}

int BaseServiceShort::getTopPrice() const
{
    return m_topPrice;
}

void BaseServiceShort::setTopPrice(int topPrice)
{
    m_topPrice = topPrice;
}
