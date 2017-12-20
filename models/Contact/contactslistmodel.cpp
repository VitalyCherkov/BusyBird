#include "contactslistmodel.h"

ContactsListModel::ContactsListModel(QObject* parent) :
    QAbstractListModel(parent)
{ }

int ContactsListModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return contacts.count();
}

QVariant ContactsListModel::data(const QModelIndex &index, int role) const
{
    if(!index.isValid())
        return QVariant();

    if(index.row() >= contacts.count())
        return QVariant();

    switch (role) {
    case linkRole:
        return contacts[index.row()].getLink();
    case descriptionRole:
        return contacts[index.row()].getDescription();
    case sourceTypeRole:
        return contacts[index.row()].getSourceType();
    default:
        return QVariant();
    }

}

QHash<int, QByteArray> ContactsListModel::roleNames() const
{
    QHash <int, QByteArray> roles = QAbstractListModel::roleNames();
    roles[linkRole] = "link";
    roles[descriptionRole] = "descriptoin";
    roles[sourceTypeRole] = "sourceType";
    return roles;
}
