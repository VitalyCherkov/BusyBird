#ifndef FILTERS_H
#define FILTERS_H

#include <QObject>
#include <QString>

class Filters : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int categoryId READ getCategoryId WRITE setCategoryId NOTIFY categoryIdChanged)
public:
    Filters(QObject* parent = Q_NULLPTR);
    int getCategoryId() const;
    void setCategoryId(int categoryId);

signals:
    void categoryIdChanged(int);

private:
    int m_categoryId;
};

#endif // FILTERS_H
