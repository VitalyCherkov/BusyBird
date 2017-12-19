#ifndef CLIENT_H
#define CLIENT_H

#include <QMetaType>
#include <QString>
#include "userinterface.h"

class Client : public UserInterface
{
public:
    Client();

    const QString& getSecondName() const;
    void setSecondName(const QString &value);

    const QString& getFirstName() const;
    void setFirstName(const QString &value);

    const QString& getavatarPath() const;
    void setavatarPath(const QString &value);

    int getRateing() const;
    void setRateing(int value);

private:
    int id;
    QString first_name;
    QString second_name;
    QString avatar_path;
    int rateing;
};

Q_DECLARE_METATYPE(Client)

#endif // CLIENT_H
