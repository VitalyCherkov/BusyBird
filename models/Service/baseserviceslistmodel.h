#ifndef BASESERVICESLISTMODEL_H
#define BASESERVICESLISTMODEL_H

#include <QAbstractListModel>
#include "baseserviceshort.h"

class BaseServicesListModel : public QAbstractListModel
{
    Q_OBJECT
public:
    enum BaseServices {
        IdRole = Qt::UserRole + 1,
        LabelRole,
        LowerPriceRole,
        TopPriceRole,
        LastBaseRole
    };

    BaseServicesListModel(QObject* parent = Q_NULLPTR);
    virtual ~BaseServicesListModel() = default;
    QVariant data(const QModelIndex &index, int role) const;

protected:
    QHash <int, QByteArray> roleNames() const;
    virtual const BaseServiceShort* getElement(int index) const = 0;
};

#endif // BASESERVICESLISTMODEL_H
