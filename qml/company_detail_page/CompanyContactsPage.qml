import QtQuick 2.9
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3
import QtQuick.Controls.Material 2.2
import "../circled_image"
import "../delegates"
import "../header_toolbar"

Page {
    id: companyDetailPage
    header: HeaderToolBar {
        ToolButton {
            text: qsTr("")
            font.pixelSize: 25
            anchors.left: parent.left
            anchors.leftMargin: 10
            anchors.verticalCenter: parent.verticalCenter
            onClicked: searchStackView.pop()
        }

        pageTitle: "Название компании"
    }
    bottomPadding: 10

    Flickable {
        anchors.fill: parent
        contentHeight: companyDetailPageContent.implicitHeight
        ColumnLayout {
            id: companyDetailPageContent
            anchors.top: parent.top
            anchors.left: parent.left
            anchors.right: parent.right
            spacing: 10

            ListModel {
                id: contacts

                ListElement {
                    type: "C"
                    data: "@link"
                    description: "description"
                    source: "TLG"
                }
                ListElement {
                    type: "C"
                    data: "@link"
                    description: "description"
                    source: "VK"
                }
                ListElement {
                    type: "C"
                    data: "@link"
                    description: "description"
                    source: "OK"
                }
                ListElement {
                    type: "C"
                    data: "@link"
                    description: "description"
                    source: "EML"
                }
                ListElement {
                    type: "C"
                    data: "@link"
                    description: "description"
                    source: "PH"
                }
                ListElement {
                    type: "C"
                    data: "@link"
                    description: "description"
                    source: "GH"
                }
                ListElement {
                    type: "C"
                    data: "@link"
                    description: "description"
                    source: "YT"
                }
                ListElement {
                    type: "C"
                    data: "@link"
                    description: "description"
                    source: "SMS"
                }
                ListElement {
                    type: "C"
                    data: "@link"
                    description: "description"
                    source: "WEB"
                }
            }

        }
        ScrollBar.vertical: ScrollBar { }
    }
}
