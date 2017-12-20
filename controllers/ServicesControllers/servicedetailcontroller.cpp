#include "servicedetailcontroller.h"



ServiceDetailController *ServiceDetailController::getInstance()
{
    static ServiceDetailController controller;
    return &controller;
}

void ServiceDetailController::loadServiceDetail(ServiceDetail* dist, int serviceId)
{
    dist->setLabel(QString("Service %1").arg(serviceId));
    dist->setCategoryId(1);
    dist->setCategoryName("Loaded category");

    dist->setDescription(QString("Description %1").arg(serviceId));
    dist->setIsFavourite(true);
    dist->getPrice()->setLower(1000);
    dist->getPrice()->setTop(1500);

    dist->getCompany()->setId(10);
    dist->getCompany()->setDescription("Company description");
    dist->getCompany()->setLabel("Company label");
    dist->getCompany()->setTimeDescription("Every day. 06:00 - 22:00");
    dist->getCompany()->getLocation()->setRegion("SPB");
    dist->getCompany()->getLocation()->setDistrict("Nevskiy");
    dist->getCompany()->getLocation()->setAddress("SPB, Nevskiy prospekt, 140/3");

}

void ServiceDetailController::loadCompanyServiceDetail(BaseServiceDetail *dist, int serviceId)
{
    dist->setLabel(QString("Service %1").arg(serviceId));
    dist->setCategoryId(1);
    dist->setCategoryName("Loaded category");

    dist->setDescription(QString("Description %1").arg(serviceId));
    dist->setIsFavourite(true);

    PriceInfo* price = new PriceInfo();
    price->setLower(1000 * serviceId);
    price->setTop(1500 * serviceId);
    dist->setPrice(price);
}

ServiceDetailController::ServiceDetailController(QObject *parent) :
    QObject(parent)
{ }
