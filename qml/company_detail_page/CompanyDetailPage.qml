import QtQuick 2.9
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3
import QtQuick.Controls.Material 2.2
import "../circled_image"
import "../delegates"
import "../header_toolbar"
import "../page_template"

ScrollablePage {
    id: companyDetailPage
    pageTitle: "Название компании"
    pageContent: Component {
        ColumnLayout {
            id: companyDetailPageContent
            anchors.top: parent.top
            anchors.left: parent.left
            anchors.right: parent.right
            spacing: 10

            ImagePageLabel {
                imageSource: "qrc:/upload/avatar_256.png"
            }

            EntitledText {
                title: "Очень очень очень длинное название компании"
                subtitle: "Описание компании такое, что никто не останется не понявшим, чем эта компания занимется. И еще несколько строк"
            }

            Pane {
                Material.elevation: 1
                height: companyParameters.implicitHeight
                padding: 0
                anchors.left: parent.left
                anchors.right: parent.right
                ColumnLayout {
                    id: companyParameters
                    anchors.top: parent.top
                    anchors.left: parent.left
                    anchors.right: parent.right
                    IconTextSubtextDelegate {
                        icon: ""
                        title: qsTr("Список услуг")
                        onClicked: currentStackView.push("qrc:/qml/company_detail_page/CompanyServicesPage.qml",
                                                         {currentStackView : companyDetailPage.currentStackView})
                    }
                    IconTextSubtextDelegate {
                        icon: ""
                        title: qsTr("Контактные данные")
                    }
                    IconTextSubtext {
                        icon: ""
                        title: qsTr("Москва, Измайлово")
                        subtitle: qsTr("г.Москва, Измайловский проспект, 73/2")
                    }
                    IconTextSubtext {
                        icon: ""
                        title: qsTr("Каждый день с 8:00 до 22:00")
                        subtitle: qsTr("Время работы")
                    }
                    IconTextSubtextDelegate {
                        icon: ""
                        title: qsTr("Юридическая информация")
                    }
                }
            }

        }
    }
}
