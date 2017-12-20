#ifndef COMPANYSERVICESLISTMODEL_H
#define COMPANYSERVICESLISTMODEL_H

#include <QAbstractListModel>
#include <QVector>
#include "companyserviceshort.h"
#include "models/Service/baseserviceslistmodel.h"

class CompanyServicesListModel : public BaseServicesListModel
{
    Q_OBJECT
public:
    enum {
        CategoryNameRole = BaseServicesListModel::LastBaseRole + 1,
        CategoryIdRole
    };

    CompanyServicesListModel(QObject* parent = Q_NULLPTR);
    int rowCount(const QModelIndex &parent = QModelIndex()) const;
    QVariant data(const QModelIndex &index, int role) const;
    bool appendService(const CompanyServiceShort& service);
protected:
    QHash <int, QByteArray> roleNames() const;

private:
    const BaseServiceShort* getElement(int index) const;
    QVector <CompanyServiceShort> m_services;
};

#endif // COMPANYSERVICESLISTMODEL_H
