#include "companyserviceslistmodel.h"

CompanyServicesListModel::CompanyServicesListModel(QObject *parent) :
    BaseServicesListModel(parent)
{ }

int CompanyServicesListModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return m_services.count();
}

QVariant CompanyServicesListModel::data(const QModelIndex &index, int role) const
{
    if(!index.isValid())
        return QVariant();

    if(role < CategoryNameRole)
        return BaseServicesListModel::data(index, role);

    if(role == CategoryNameRole)
        return m_services[index.row()].getCategoryName();

    if(role == CategoryIdRole)
        return m_services[index.row()].getId();

    return QVariant();
}

bool CompanyServicesListModel::appendService(const CompanyServiceShort &service)
{
    beginInsertRows(QModelIndex(), m_services.count(), m_services.count());
    m_services.push_back(service);
    endInsertRows();
    return true;
}

QHash<int, QByteArray> CompanyServicesListModel::roleNames() const
{
    QHash <int, QByteArray> roles = BaseServicesListModel::roleNames();
    roles[CategoryNameRole] = "categoryName";
    roles[CategoryIdRole] = "categoryId";

    return roles;
}

const BaseServiceShort *CompanyServicesListModel::getElement(int index) const
{
    return &m_services[index];
}
