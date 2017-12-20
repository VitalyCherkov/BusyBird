#include "servicecompanysearchlist_model.h"



ServiceCompanySearchListModel::ServiceCompanySearchListModel(QObject *parent) :
    QAbstractListModel(parent)
{
    for(int i = 0; i < 10; i++) {
        services.push_back(ServiceCompanyShort(
                               i,
                               QString("Label %1").arg(i),
                               QString("Company %1").arg(i),
                               1000, 1500
                               ));
    }
}

int ServiceCompanySearchListModel::rowCount(const QModelIndex &parent) const {
    Q_UNUSED(parent);
    return services.count();
}

QVariant ServiceCompanySearchListModel::data(const QModelIndex &index, int role) const {
    if(!index.isValid())
        return QVariant();

    if(index.row() >= services.count())
        return QVariant();

    const ServiceCompanyShort& curService = services[index.row()];

    if(role == LabelRole)
        return curService.getLabel();

    if(role == CompanyLabelRole)
        return curService.getCompanyLabel();

    if(role == LowerPriceRole)
        return curService.getLowerPrice();

    if(role == TopPriceRole)
        return curService.getTopPrice();

    if(role == IdRole)
        return curService.getId();

    return QVariant();
}

QHash<int, QByteArray> ServiceCompanySearchListModel::roleNames() const
{
    QHash <int, QByteArray> roles = QAbstractListModel::roleNames();
    roles[LabelRole] = "label";
    roles[CompanyLabelRole] = "companyLabel";
    roles[LowerPriceRole] = "lowerPrice";
    roles[TopPriceRole] = "topPrice";
    roles[IdRole] = "id";

    return roles;
}
