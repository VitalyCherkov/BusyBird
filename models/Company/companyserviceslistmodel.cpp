#include "companyserviceslistmodel.h"

CompanyServicesListModel::CompanyServicesListModel(QObject *parent) :
    BaseServicesListModel(parent)
{ }

int CompanyServicesListModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return services.count();
}

QVariant CompanyServicesListModel::data(const QModelIndex &index, int role) const
{
    if(role < CategoryRole)
        return BaseServicesListModel::data(index, role);

    if(role == CategoryRole)
        return services[index.row()].getLabel();

    return QVariant();
}

QHash<int, QByteArray> CompanyServicesListModel::roleNames() const
{
    QHash <int, QByteArray> roles = BaseServicesListModel::roleNames();
    roles[CategoryRole] = "category";

    return roles;
}

const BaseServiceShort *CompanyServicesListModel::getElement(int index) const
{
    return &services[index];
}
