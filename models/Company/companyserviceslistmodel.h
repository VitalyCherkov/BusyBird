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
        CategoryRole = BaseServicesListModel::LastBaseRole + 1
    };

    CompanyServicesListModel(QObject* parent = Q_NULLPTR);
    int rowCount(const QModelIndex &parent = QModelIndex()) const;
    QVariant data(const QModelIndex &index, int role) const;

protected:
    QHash <int, QByteArray> roleNames() const;

private:
    const BaseServiceShort* getElement(int index) const;
    QVector <CompanyServiceShort> services;
};

#endif // COMPANYSERVICESLISTMODEL_H
