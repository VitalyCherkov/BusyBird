#ifndef USERINTERFACE_H
#define USERINTERFACE_H

#include <QVector>
#include "contact.h"

class UserInterface
{
public:
    UserInterface();
    UserInterface(const QVector <Contact>& contacts);
    const QVector <Contact>& getContacts() const;
    QVector <Contact>& getContacts();
    void setContacts(const QVector <Contact>& contacts);
private:
    QVector <Contact> contacts;
};

#endif // USERINTERFACE_H
