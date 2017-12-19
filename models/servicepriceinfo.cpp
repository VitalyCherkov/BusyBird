#include "servicepriceinfo.h"

ServicePriceInfo::ServicePriceInfo(QObject* parent,
                                   int lowerPrice,
                                   int topPrice,
                                   const QString& details) :
    QObject(parent),
    m_lower(lowerPrice),
    m_top(topPrice),
    m_details(details)
{
}

int ServicePriceInfo::getLower() const
{
    return m_lower;
}

void ServicePriceInfo::setLower(int lower)
{
    if(lower >= 0) {
        m_lower = lower;
        m_top = m_top < m_lower ? m_lower : m_top;
        emit lowerChanged(m_lower);
    }
}

int ServicePriceInfo::getTop() const
{
    return m_top;
}

void ServicePriceInfo::setTop(int top)
{
    if(top >= 0) {
        m_top = top;
        m_lower = m_top < m_lower ? m_top : m_lower;
        emit topChanged(m_top);
    }
}

const QString& ServicePriceInfo::getDetails() const
{
    return m_details;
}

void ServicePriceInfo::setDetails(const QString& details)
{
    m_details = details;
    emit detailsChanged(m_details);
}


void ServicePriceInfo::setPrice(int lowerPrice, int topPrice)
{
    if(lowerPrice >= 0 && topPrice >= 0) {
        m_lower = lowerPrice;
        m_top = topPrice > lowerPrice ? topPrice : lowerPrice;

        emit lowerChanged(m_lower);
        emit topChanged(m_top);
    }
}


