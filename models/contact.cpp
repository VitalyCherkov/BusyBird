#include "contact.h"

Contact::Contact(const ContactSource& source, const QString& description, const QString& data) :
    source(source),
    description(description),
    data(data)
{ }

const ContactSource& Contact::getSource() const
{
    return source;
}

void Contact::setSource(const ContactSource &value)
{
    source = value;
}

const QString& Contact::getDescription() const
{
    return description;
}

void Contact::setDescription(const QString &value)
{
    description = value;
}

const QString& Contact::getData() const
{
    return data;
}

void Contact::setData(const QString &value)
{
    data = value;
}
