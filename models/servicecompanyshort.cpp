#include "servicecompanyshort.h"



ServiceCompanyShort::ServiceCompanyShort(int id, const QString &label,
                                         const QString &companyLabel,
                                         int lowerPrice, int topPrice) :
    id(id),
    label(label),
    companyLabel(companyLabel),
    lowerPrice(lowerPrice),
    topPrice(topPrice)
{ }

int ServiceCompanyShort::getId() const {
    return id;
}

void ServiceCompanyShort::setId(int id) {
    this->id = id;
}

const QString& ServiceCompanyShort::getLabel() const {
    return label;
}

void ServiceCompanyShort::setLabel(const QString &label) {
    this->label = label;
}

const QString& ServiceCompanyShort::getCompanyLabel() const {
    return companyLabel;
}

void ServiceCompanyShort::setCompanyLabel(const QString &companyLabel) {
    this->companyLabel = companyLabel;
}

int ServiceCompanyShort::getLowerPrice() const {
    return lowerPrice;
}

void ServiceCompanyShort::setLowerPrice(int lowerPrice) {
    this->lowerPrice = lowerPrice;
}

int ServiceCompanyShort::getTopPrice() const {
    return topPrice;
}

void ServiceCompanyShort::setTopPrice(int topPrice) {
    this->topPrice = topPrice;
}

void ServiceCompanyShort::setPrice(int lowerPrice, int topPrice) {
    this->lowerPrice = lowerPrice;
    this->topPrice = topPrice;
}
