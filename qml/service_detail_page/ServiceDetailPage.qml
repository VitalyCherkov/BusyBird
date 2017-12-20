import QtQuick 2.9
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3
import QtQuick.Controls.Material 2.2
import "../circled_image"
import "../header_toolbar"
import "../delegates"
import "../page_template"
import loadedService 1.0

ScrollablePage {
    id: serviceDetailPage
    property ServiceDetail currentService : loadedService
    pageTitle: currentService.label
    pageContent: Component {
        ColumnLayout {
            id: serviceDetailPageContent

            anchors.top: parent.top
            anchors.left: parent.left
            anchors.right: parent.right
            spacing: 10
            anchors.bottomMargin: 10

            ServiceOnlyInfo {
                id: serviceOnlyInfo
                currentService: serviceDetailPage.currentService

            }

            CompanyInfo {
                id: companyInfo
                currentStackView: serviceDetailPage.currentStackView
                currentShortCompany: currentService.company
            }

        }
    }
}

