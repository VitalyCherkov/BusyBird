#include "companyshort.h"

CompanyShort::CompanyShort(QObject* parent,
                                   int id, const QString& label,
                                   const QString& description,
                                   DetailCompanyLocation* location) :
    QObject(parent),
    m_id(id),
    m_label(label),
    m_description(description),
    m_location(location)
{ }

int CompanyShort::getId() const
{
    return m_id;
}

void CompanyShort::setId(int id)
{
    m_id = id;
    emit idChanged(m_id);
}

const QString& CompanyShort::getLabel() const
{
    return m_label;
}

void CompanyShort::setLabel(const QString& label)
{
    m_label = label;
    emit labelChanged(m_label);
}

const QString& CompanyShort::getDescription() const
{
    return m_description;
}

void CompanyShort::setDescription(const QString& description)
{
    m_description = description;
    emit descriptionChanged(m_description);
}

const QString& CompanyShort::getTimeDescription() const
{
    return m_timeDescription;
}

void CompanyShort::setTimeDescription(const QString& timeDescription)
{
    m_timeDescription = timeDescription;
    emit timeDescriptionChanged(m_timeDescription);
}

DetailCompanyLocation *CompanyShort::getLocation() const
{
    return m_location;
}

void CompanyShort::setLocation(DetailCompanyLocation *location)
{
    if(location && m_location != location) {
        if(m_location) m_location->setParent(Q_NULLPTR);
        location->setParent(this);
        m_location = location;
        emit locationChanged(m_location);
    }
}
