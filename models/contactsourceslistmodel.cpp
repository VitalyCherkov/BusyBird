#include "contactsourceslistmodel.h"


ContactSourcesListModel::ContactSourcesListModel(const QVector<ContactSource> &items, QObject *parent) :
    QAbstractListModel(parent),
    items(items)
{ }

int ContactSourcesListModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent)
    return items.count();
}

QVariant ContactSourcesListModel::data(const QModelIndex &index, int role) const
{
    if(!index.isValid())
        return QVariant();

    if(index.row() >= items.size())
        return QVariant();

    if(role == Qt::DisplayRole)
        return QVariant::fromValue(items[index.row()]);

    return QVariant();
}


