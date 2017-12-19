#include "shortcompanyinfo.h"

ShortCompanyInfo::ShortCompanyInfo(QObject* parent,
                                   int id, const QString &label,
                                   const QString &description,
                                   DetailCompanyLocation* location) :
    QObject(parent),
    m_id(id),
    m_label(label),
    m_description(description),
    m_location(location)
{ }

int ShortCompanyInfo::getId() const
{
    return m_id;
}

void ShortCompanyInfo::setId(int id)
{
    m_id = id;
    emit idChanged(m_id);
}

const QString& ShortCompanyInfo::getLabel() const
{
    return m_label;
}

void ShortCompanyInfo::setLabel(const QString& label)
{
    m_label = label;
    emit labelChanged(m_label);
}

const QString& ShortCompanyInfo::getDescription() const
{
    return m_description;
}

void ShortCompanyInfo::setDescription(const QString &description)
{
    m_description = description;
    emit descriptionChanged(m_description);
}

const QString& ShortCompanyInfo::getTimeDescription() const
{
    return m_timeDescription;
}

void ShortCompanyInfo::setTimeDescription(const QString &timeDescription)
{
    m_timeDescription = timeDescription;
    emit timeDescriptionChanged(m_timeDescription);
}

DetailCompanyLocation *ShortCompanyInfo::getLocation() const
{
    return m_location;
}

void ShortCompanyInfo::setLocation(DetailCompanyLocation *location)
{
    if(location && m_location != location) {
        if(m_location) m_location->setParent(Q_NULLPTR);
        location->setParent(this);
        m_location = location;
        emit locationChanged(m_location);
    }
}
