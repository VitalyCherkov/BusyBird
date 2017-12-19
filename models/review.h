#ifndef REVIEW_H
#define REVIEW_H

#include <QDateTime>
#include <QString>

class Review
{
public:
    Review();
    Review(const QString& text, float mark, int from_id, int about_id);

    const QDateTime& getDate() const;
    void setDate(const QDateTime &value);

    const QString& getText() const;
    void setText(const QString &value);

    float getMark() const;
    void setMark(float value);

    int getFrom_id() const;
    void setFrom_id(int value);

    int getAbout_id() const;
    void setAbout_id(int value);

private:
    QDateTime date;
    QString text;
    float mark;
    int from_id;
    int about_id;
};

#endif // REVIEW_H
