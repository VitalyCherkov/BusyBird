#ifndef CONTACT_H
#define CONTACT_H

#include "contactsource.h"

class Contact
{
public:
    Contact(const ContactSource& source, const QString& description, const QString& data);
    const ContactSource& getSource() const;
    void setSource(const ContactSource &value);

    const QString& getDescription() const;
    void setDescription(const QString &value);

    const QString& getData() const;
    void setData(const QString &value);

private:
    ContactSource source;
    QString description;
    QString data;
};

#endif // CONTACT_H
