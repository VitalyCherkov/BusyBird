#include "detailcompanylocation.h"

DetailCompanyLocation::DetailCompanyLocation(const QString &region,
                                             const QString &district,
                                             const QString &address,
                                             QObject *parent) :
    QObject(parent),
    m_region(region),
    m_district(district),
    m_address(address)
{ }

const QString& DetailCompanyLocation::getRegion() const
{
    return m_region;
}

void DetailCompanyLocation::setRegion(const QString &region)
{
    if(region != m_region) {
        m_region = region;
        emit regionChanged(m_region);
    }
}

const QString& DetailCompanyLocation::getDistrict() const
{
    return m_district;
}

void DetailCompanyLocation::setDistrict(const QString &district)
{
    if(district != m_district) {
        m_district = district;
        emit districtChanged(m_district);
    }
}

const QString& DetailCompanyLocation::getAddress() const
{
    return m_address;
}

void DetailCompanyLocation::setAddress(const QString &address)
{
    if(address != m_address) {
        m_address = address;
        emit addressChanged(m_address);
    }
}
