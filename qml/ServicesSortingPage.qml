import QtQuick 2.9
import QtQuick.Controls 2.2
import QtQuick.Controls.Material 2.2
import QtQuick.Layouts 1.3
import "header_toolbar"
import "delegates"

Page {
    id: servicesSortingPage
    property StackView currentStackView
    header: HeaderToolBar {
        ToolButton {
            text: qsTr("")
            font.pixelSize: 25
            anchors.left: parent.left
            anchors.leftMargin: 10
            anchors.verticalCenter: parent.verticalCenter
            onClicked: currentStackView.pop()
        }

        pageTitle: qsTr("Сортировка")
    }

    ColumnLayout {
        Layout.fillWidth: true
        anchors.top: parent.top
        anchors.left: parent.left
        anchors.right: parent.right
        spacing: 10
        anchors.topMargin: 10
        anchors.bottomMargin: 10

        ListModel {
            id: serviceSortingParameters
            property var radioGroup: ButtonGroup {
                id: radioGroup
            }

            ListElement {
                title: qsTr("По популярности")
                type: "R"
            }
            ListElement {
                title: qsTr("По рейтингу")
                type: "R"
            }
            ListElement {
                title: qsTr("По имени")
                type: "R"
            }
        }

        SettingsContainer {
            buttonListModel: serviceSortingParameters
        }
    }
}
