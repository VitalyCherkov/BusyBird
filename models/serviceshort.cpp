#include "serviceshort.h"



ServiceShort::ServiceShort(int id, const QString& label,
                                         int lowerPrice, int topPrice,
                                         const QString& companyLabel,
                                         int companyId) :

    BaseServiceShort(id, label, lowerPrice, topPrice),
    m_companyLabel(companyLabel),
    m_companyId(companyId)
{ }

const QString& ServiceShort::getCompanyLabel() const {
    return m_companyLabel;
}

void ServiceShort::setCompanyLabel(const QString& companyLabel) {
    m_companyLabel = companyLabel;
}

int ServiceShort::getCompanyId() const
{
    return m_companyId;
}

void ServiceShort::setCompanyId(int companyId)
{
    m_companyId = companyId;
}

