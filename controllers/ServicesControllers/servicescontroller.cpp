#include "servicescontroller.h"

ServicesController* ServicesController::getInstance()
{
    static ServicesController controller;
    return &controller;
}

void ServicesController::loadServices(ServiceListModel *dist)
{
    for(int i = 0; i < 10; i++) {
        dist->appendService(ServiceShort(
                               i,
                               QString("Label %1").arg(i),
                               1000, 1500,
                               QString("Company %1").arg(i),
                               i
                               ));
    }
}

void ServicesController::loadCompanyServices(CompanyServicesListModel *dist, int companyId)
{
    for(int i = 0; i < 10; i++) {
        dist->appendService(CompanyServiceShort(
                               i,
                               QString("Label %1").arg(i),
                               1000, 1500,
                               QString("Category %1").arg(i),
                               i
                               ));
    }
}
/*
void ServicesController::load(ServiceCompanySearchListModel *dist, Filters *searchFilters)
{

}
*/
ServicesController::ServicesController(QObject *parent) : QObject(parent)
{

}
