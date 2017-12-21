import QtQuick 2.9
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3
import QtQuick.Controls.Material 2.2
import test 1.0
import controllers 1.0
import "../header_toolbar"
import "../page_template"

UnscrollablePage {
    id: companyServicesPage
    property CompanyServicesListModel services: CompanyServicesListModel {}
    pageTitle: "Услуги компании"
    pageContent: Component {
        ListView {
            model: {
                servicesListController.loadCompanyServices(services, 5)
                return services
            }
            anchors.fill: parent
            anchors.topMargin: 10
            anchors.bottomMargin: 10
            spacing: 10
            delegate: Component {
                Loader {
                    property bool fullService: false
                    anchors.left: parent.left
                    anchors.right: parent.right
                    source: {
                        if(!fullService)
                            return "CompanyServiceShortDelegate.qml"
                        else
                            return "CompanyServiceDetailDelagate.qml"
                    }
                }
            }
        }
    }
}

