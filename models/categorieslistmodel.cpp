#include "categorieslistmodel.h"
#include <QDebug>


CategoriesListModel::CategoriesListModel(QObject *parent) :
    QAbstractListModel(parent)
{
    for(int i = 0; i < 10; i++)
        this->categories.push_back(ServiceCategory(i, QString("Category %1").arg(i)));

}

int CategoriesListModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return categories.count();
}

QVariant CategoriesListModel::data(const QModelIndex &index, int role) const
{
    // qDebug("data\n");

    if(!index.isValid())
        return QVariant();

    if(index.row() > categories.size())
        return QVariant();

    if(role == Qt::DisplayRole || role == LabelRole)
        return categories[index.row()].getLabel();

    if(role == IdRole)
        return categories[index.row()].getId();

    return QVariant();
}

QHash <int, QByteArray> CategoriesListModel::roleNames() const
{
    QHash <int, QByteArray> roles = QAbstractListModel::roleNames();
    roles[IdRole] = "id";
    roles[LabelRole] = "label";

    return roles;
}

void CategoriesListModel::addCategory(const ServiceCategory &newCategory)
{
    qDebug("add\n");
    beginInsertRows(QModelIndex(), rowCount(), rowCount());
    categories << newCategory;
    endInsertRows();

    //QModelIndex index = createIndex(categories.size() -
    //emit dataChanged();
}



