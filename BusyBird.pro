QT += quick
CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += main.cpp \
    engine/engine.cpp \
    models/Company/company.cpp \
    models/Company/detailcompanylocation.cpp \
    models/categorieslistmodel.cpp \
    models/client.cpp \
    models/contact.cpp \
    models/contactsource.cpp \
    models/contactsourceslistmodel.cpp \
    models/detailservicecompany.cpp \
    models/review.cpp \
    models/servicecategory.cpp \
    models/servicecompanysearchlist_model.cpp \
    models/servicecompanyshort.cpp \
    models/servicepriceinfo.cpp \
    models/shortcompanyinfo.cpp \
    models/userinterface.cpp \
    models/Company/legalinformation.cpp \
    models/Service/baseserviceshort.cpp \
    models/Company/companyserviceshort.cpp \
    models/Company/companyserviceslistmodel.cpp \
    models/Service/baseserviceslistmodel.cpp

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Additional import path used to resolve QML modules just for Qt Quick Designer
QML_DESIGNER_IMPORT_PATH =

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    engine/engine.h \
    models/Company/company.h \
    models/Company/detailcompanylocation.h \
    models/categorieslistmodel.h \
    models/client.h \
    models/contact.h \
    models/contactsource.h \
    models/contactsourceslistmodel.h \
    models/detailservicecompany.h \
    models/review.h \
    models/servicecategory.h \
    models/servicecompanysearchlist_model.h \
    models/servicecompanyshort.h \
    models/servicepriceinfo.h \
    models/shortcompanyinfo.h \
    models/userinterface.h \
    models/Company/legalinformation.h \
    models/Service/baseserviceshort.h \
    models/Company/companyserviceshort.h \
    models/Company/companyserviceslistmodel.h \
    models/Service/baseserviceslistmodel.h
