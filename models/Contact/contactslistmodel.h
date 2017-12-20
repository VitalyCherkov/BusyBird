#ifndef CONTACTSLISTMODEL_H
#define CONTACTSLISTMODEL_H

#include <QAbstractListModel>
#include <QString>
#include <QVector>
#include "contact.h"

class ContactsListModel : public QAbstractListModel
{
    Q_OBJECT
public:
    enum {
        linkRole = Qt::UserRole + 1,
        descriptionRole,
        sourceTypeRole
    };

    ContactsListModel(QObject* parent = Q_NULLPTR);
    int rowCount(const QModelIndex &parent = QModelIndex()) const;
    QVariant data(const QModelIndex &index, int role) const;

private:
    QHash <int, QByteArray> roleNames() const;
    QVector <Contact> contacts;
};

#endif // CONTACTSLISTMODEL_H
