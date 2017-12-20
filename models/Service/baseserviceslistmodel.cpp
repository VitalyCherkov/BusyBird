#include "baseserviceslistmodel.h"

BaseServicesListModel::BaseServicesListModel(QObject *parent) :
    QAbstractListModel(parent)
{ }

QHash<int, QByteArray> BaseServicesListModel::roleNames() const
{
    QHash <int, QByteArray> roles = QAbstractListModel::roleNames();
    roles[LabelRole] = "label";
    roles[LowerPriceRole] = "lowerPrice";
    roles[TopPriceRole] = "topPrice";
    roles[IdRole] = "id";

    return roles;
}

QVariant BaseServicesListModel::data(const QModelIndex &index, int role) const
{
    if(!index.isValid())
        return QVariant();

    const BaseServiceShort* element = getElement(index.row());

    if(!element)
        return QVariant();

    if(role == LabelRole)
        return element->getLabel();

    if(role == LowerPriceRole)
        return element->getLowerPrice();

    if(role == TopPriceRole)
        return element->getTopPrice();

    if(role == IdRole)
        return element->getId();

    return QVariant();
}

Qt::ItemFlags BaseServicesListModel::flags(const QModelIndex &index) const
{
    return Qt::ItemIsEditable | QAbstractListModel::flags(index);
}
