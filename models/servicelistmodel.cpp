#include "servicelistmodel.h"
#include <QDebug>


ServiceListModel::ServiceListModel(QObject *parent) :
    BaseServicesListModel(parent)
{ }

int ServiceListModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return m_services.count();
}

QVariant ServiceListModel::data(const QModelIndex &index, int role) const
{
    if(!index.isValid())
        return QVariant();


    if(role < CompanyLabelRole)
        return BaseServicesListModel::data(index, role);

    if(role == CompanyLabelRole)
        return m_services[index.row()].getCompanyLabel();

    if(role == CompanyIdRole)
        return m_services[index.row()].getCompanyId();

    return QVariant();
}

bool ServiceListModel::appendService(const ServiceShort &service)
{
    beginInsertRows(QModelIndex(), m_services.count(), m_services.count());
    m_services.push_back(service);
    endInsertRows();
    return true;
}

QHash<int, QByteArray> ServiceListModel::roleNames() const
{
    QHash <int, QByteArray> roles = BaseServicesListModel::roleNames();
    roles[CompanyLabelRole] = "companyLabel";
    roles[CompanyIdRole] = "companyId";

    return roles;
}

const BaseServiceShort *ServiceListModel::getElement(int index) const
{
    return &m_services[index];
}




