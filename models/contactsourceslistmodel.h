#ifndef CONTACTSOURCESLISTMODEL_H
#define CONTACTSOURCESLISTMODEL_H

#include <QAbstractListModel>
#include <QVector>
#include "contactsource.h"

class ContactSourcesListModel : public QAbstractListModel
{
    Q_OBJECT

public:
    ContactSourcesListModel(const QVector <ContactSource>& items,
                            QObject* parent = nullptr);

    int rowCount(const QModelIndex& parent = QModelIndex()) const;
    QVariant data(const QModelIndex &index, int role) const;

private:
    QVector <ContactSource> items;
};

#endif // CONTACTSOURCESLISTMODEL_H
