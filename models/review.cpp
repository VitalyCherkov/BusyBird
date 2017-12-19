#include "review.h"

Review::Review()
{ }

Review::Review(const QString &text, float mark, int from_id, int about_id) :
    date(QDateTime::currentDateTime()),
    text(text),
    mark(mark),
    from_id(from_id),
    about_id(about_id)
{ }

const QDateTime& Review::getDate() const
{
    return date;
}

void Review::setDate(const QDateTime &value)
{
    date = value;
}

const QString& Review::getText() const
{
    return text;
}

void Review::setText(const QString &value)
{
    text = value;
}

float Review::getMark() const
{
    return mark;
}

void Review::setMark(float value)
{
    mark = value;
}

int Review::getFrom_id() const
{
    return from_id;
}

void Review::setFrom_id(int value)
{
    from_id = value;
}

int Review::getAbout_id() const
{
    return about_id;
}

void Review::setAbout_id(int value)
{
    about_id = value;
}
