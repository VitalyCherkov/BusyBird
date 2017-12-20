#ifndef SERVICECOMPANYSEARCHLISTMODEL_H
#define SERVICECOMPANYSEARCHLISTMODEL_H

#include <QAbstractListModel>
#include <QVector>
#include "serviceshort.h"
#include "Service/baseserviceslistmodel.h"

class ServiceListModel : public BaseServicesListModel
{
    Q_OBJECT
public:

    enum {
        CompanyLabelRole = BaseServicesListModel::LastBaseRole + 1,
        CompanyIdRole
    };

    ServiceListModel(QObject* parent = Q_NULLPTR);
    int rowCount(const QModelIndex &parent = QModelIndex()) const;
    QVariant data(const QModelIndex &index, int role) const;
    bool appendService(const ServiceShort& service);

protected:
    QHash <int, QByteArray> roleNames() const;

private:
    const BaseServiceShort* getElement(int index) const;
    QVector <ServiceShort> m_services;

};

#endif // SERVICECOMPANYSEARCHLISTMODEL_H
