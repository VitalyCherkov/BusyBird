#ifndef SERVICECOMPANYSEARCHLISTMODEL_H
#define SERVICECOMPANYSEARCHLISTMODEL_H

#include <QAbstractListModel>
#include <QVector>
#include "servicecompanyshort.h"

class ServiceCompanySearchListModel : public QAbstractListModel
{
    Q_OBJECT
public:
    enum CustomRoles {
        IdRole = Qt::UserRole + 1,
        LabelRole,
        LowerPriceRole,
        TopPriceRole,
        CompanyLabelRole
    };

    ServiceCompanySearchListModel(QObject* parent = Q_NULLPTR);

    int rowCount(const QModelIndex &parent = QModelIndex()) const;
    QVariant data(const QModelIndex &index, int role) const;

protected:
    QHash <int, QByteArray> roleNames() const;

private:
    QVector <ServiceCompanyShort> services;

};

#endif // SERVICECOMPANYSEARCHLISTMODEL_H
