#include <QGuiApplication>
#include <QtQml>
#include <QQmlApplicationEngine>
#include "models/categorieslistmodel.h"
#include "models/servicecompanysearchlist_model.h"
#include "models/servicedetail.h"

int main(int argc, char *argv[]) {
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);

    ServiceDetail* curService = new ServiceDetail();
    curService->setCategoryId(1);
    curService->setCategoryName("Category Name");
    curService->setDescription("Very very very long description of that company");
    curService->setLabel("Service Label");


    ShortCompanyInfo* curCompanyForService = new ShortCompanyInfo();
    curCompanyForService->setId(5);
    curCompanyForService->setLabel("The best COMPANY");
    curCompanyForService->setDescription("Very very very long description of this company, but really not very long");
    curCompanyForService->setTimeDescription("Every day. 8:00 - 22:00");
    curService->setCompany(curCompanyForService);

    PriceInfo* servicePrice = new PriceInfo();
    servicePrice->setLower(10000);
    servicePrice->setTop(15000);
    servicePrice->setDetails("Some details");
    curService->setPrice(servicePrice);

    DetailCompanyLocation* companyLocation = new DetailCompanyLocation();
    companyLocation->setRegion("Moscow");
    companyLocation->setDistrict("Izmailovo");
    companyLocation->setAddress("Moscow, Izmailovskiy prospekt, 73/2");
    curCompanyForService->setLocation(companyLocation);

    qmlRegisterUncreatableType <BaseServiceDetail>("loadedService", 1, 0, "LoadedServiceCompanyBase", "");
    qmlRegisterUncreatableType <DetailCompanyLocation>("loadedService", 1, 0, "LoadedServiceCompanyLocation", "");
    qmlRegisterUncreatableType <ServiceDetail>("loadedService", 1, 0, "LoadedService", "");
    qmlRegisterUncreatableType <ShortCompanyInfo> ("loadedService", 1, 0, "LoadedServiceCompany", "");
    qmlRegisterUncreatableType <PriceInfo> ("loadedService", 1, 0, "LoadedServicePrice", "");

    qmlRegisterType <CategoriesListModel> ("test", 1, 0, "CategoriesList");
    qmlRegisterType <ServiceCompanySearchListModel> ("test", 1, 0, "ServicesList");

    QQmlApplicationEngine engine;
    engine.rootContext()->setContextProperty("loadedService", curService);

    engine.load(QUrl(QLatin1String("qrc:/qml/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}

