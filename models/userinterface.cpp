#include "userinterface.h"

UserInterface::UserInterface()
{ }

UserInterface::UserInterface(const QVector<Contact> &contacts) :
    contacts(contacts)
{ }

const QVector<Contact> &UserInterface::getContacts() const
{
    return contacts;
}

QVector<Contact> &UserInterface::getContacts()
{
    return contacts;
}

void UserInterface::setContacts(const QVector<Contact> &contacts)
{
    this->contacts = contacts;
}
