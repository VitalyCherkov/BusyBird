#include "priceinfo.h"

PriceInfo::PriceInfo(QObject* parent,
                                   int lowerPrice,
                                   int topPrice,
                                   const QString& details) :
    QObject(parent),
    m_lower(lowerPrice),
    m_top(topPrice),
    m_details(details)
{
}

int PriceInfo::getLower() const
{
    return m_lower;
}

void PriceInfo::setLower(int lower)
{
    if(lower >= 0) {
        m_lower = lower;
        m_top = m_top < m_lower ? m_lower : m_top;
        emit lowerChanged(m_lower);
    }
}

int PriceInfo::getTop() const
{
    return m_top;
}

void PriceInfo::setTop(int top)
{
    if(top >= 0) {
        m_top = top;
        m_lower = m_top < m_lower ? m_top : m_lower;
        emit topChanged(m_top);
    }
}

const QString& PriceInfo::getDetails() const
{
    return m_details;
}

void PriceInfo::setDetails(const QString& details)
{
    m_details = details;
    emit detailsChanged(m_details);
}


void PriceInfo::setPrice(int lowerPrice, int topPrice)
{
    if(lowerPrice >= 0 && topPrice >= 0) {
        m_lower = lowerPrice;
        m_top = topPrice > lowerPrice ? topPrice : lowerPrice;

        emit lowerChanged(m_lower);
        emit topChanged(m_top);
    }
}


