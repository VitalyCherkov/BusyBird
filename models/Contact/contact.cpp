#include "contact.h"

Contact::Contact()
{

}

const QString& Contact::getLink() const
{
    return m_link;
}

void Contact::setLink(const QString &link)
{
    m_link = link;
}

const QString& Contact::getDescription() const
{
    return m_description;
}

void Contact::setDescription(const QString &description)
{
    m_description = description;
}

const QString& Contact::getSourceType() const
{
    return m_sourceType;
}

void Contact::setSourceType(const QString &sourceType)
{
    m_sourceType = sourceType;
}
