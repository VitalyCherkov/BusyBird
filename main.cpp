#include <QGuiApplication>
#include <QtQml>
#include <QQmlApplicationEngine>
#include "models/categorieslistmodel.h"
#include "models/servicelistmodel.h"
#include "models/Service/servicedetail.h"
#include "controllers/ServicesControllers/servicescontroller.h"
#include "controllers/ServicesControllers/servicedetailcontroller.h"
#include "models/Company/company.h"

int main(int argc, char *argv[]) {
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);

    ServiceDetail* curService = new ServiceDetail();

    CompanyShort* curCompanyForService = new CompanyShort();
    curService->setCompany(curCompanyForService);
    PriceInfo* servicePrice = new PriceInfo();
    curService->setPrice(servicePrice);
    DetailCompanyLocation* companyLocation = new DetailCompanyLocation();
    curCompanyForService->setLocation(companyLocation);

    qmlRegisterType <BaseServiceDetail>("loadedModels", 1, 0, "BaseServiceDetail");
    qmlRegisterType <PriceInfo> ("loadedModels", 1, 0, "PriceInfo");
    qmlRegisterUncreatableType <DetailCompanyLocation>("loadedModels", 1, 0, "DetailCompanyLocation", "");
    qmlRegisterUncreatableType <ServiceDetail>("loadedModels", 1, 0, "ServiceDetail", "");
    qmlRegisterType <CompanyShort> ("loadedModels", 1, 0, "CompanyShort");
    qmlRegisterUncreatableType <Company> ("loadedModels", 1, 0, "CompanyDetail", "");

    // Контроллеры
    qmlRegisterUncreatableType <ServicesController>("controllers", 1, 0, "ServicesListController", "");
    qmlRegisterUncreatableType <ServiceDetailController>("controllers", 1, 0, "ServiceDetailController", "");

    qmlRegisterType <CategoriesListModel> ("test", 1, 0, "CategoriesListModel");
    qmlRegisterType <ServiceListModel> ("test", 1, 0, "ServicesListModel");
    qmlRegisterType <CompanyServicesListModel> ("test", 1, 0, "CompanyServicesListModel");


    QQmlApplicationEngine engine;
    engine.rootContext()->setContextProperty("loadedService", curService);
    engine.rootContext()->setContextProperty("servicesListController",
                                             ServicesController::getInstance());
    engine.rootContext()->setContextProperty("serviceDetailController",
                                             ServiceDetailController::getInstance());

    engine.load(QUrl(QLatin1String("qrc:/qml/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}

