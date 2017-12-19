#include "client.h"

Client::Client()
{

}

const QString& Client::getSecondName() const
{
    return second_name;
}

void Client::setSecondName(const QString &value)
{
    second_name = value;
}

const QString& Client::getFirstName() const
{
    return first_name;
}

void Client::setFirstName(const QString &value)
{
    first_name = value;
}

const QString& Client::getavatarPath() const
{
    return avatar_path;
}

void Client::setavatarPath(const QString &value)
{
    avatar_path = value;
}

int Client::getRateing() const
{
    return rateing;
}

void Client::setRateing(int value)
{
    rateing = value;
}
