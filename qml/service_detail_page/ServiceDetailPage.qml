import QtQuick 2.9
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3
import QtQuick.Controls.Material 2.2
import "../circled_image"
import "../header_toolbar"
import "../delegates"
import "../page_template"

ScrollablePage {
    id: serviceDetailPage
    pageTitle: loadedService.label
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
                currentService: loadedService

            }

            CompanyInfo {
                id: companyInfo
                currentStackView: serviceDetailPage.currentStackView
                currentShortCompany: loadedService.company
            }

        }
    }
}

