#ifndef CATEGORIESLISTMODEL_H
#define CATEGORIESLISTMODEL_H

#include <QAbstractListModel>
#include <QVector>
#include "servicecategory.h"

class CategoriesListModel : public QAbstractListModel
{
    Q_OBJECT
public:
    enum CategoriesListModelRoles {
        IdRole = Qt::UserRole + 1,
        LabelRole
    };

    CategoriesListModel(QObject* parent = nullptr);

    int rowCount(const QModelIndex &parent = QModelIndex()) const;
    QVariant data(const QModelIndex &index, int role) const;
    void addCategory(const ServiceCategory& newCategory);

protected:
    QHash <int, QByteArray> roleNames() const;

private:
    QVector <ServiceCategory> categories;
};

#endif // CATEGORIESLISTMODEL_H
