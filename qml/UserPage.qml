import QtQuick 2.9
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3
import "delegates"

Page {
    id: categoryListPage

    header: UserPageHeader { }

    ListModel {
        id: contacts

        //ContactListElement{}
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

    ListModel {
        id: profileParameters
        ListElement {
            index: 1
            title: qsTr("Email")
            type: ""
            controller: qsTr("")
        }
        ListElement {
            index: 2
            title: qsTr("Изменить пароль")
            type: ""
            controller: qsTr("")
        }

        ListElement {
            index: 3
            title: qsTr("Выйти")
            type: ""
            controller: qsTr("")
        }

    }

    Flickable {
        anchors.fill: parent
        contentHeight: userPageColumn.implicitHeight

        ColumnLayout {
            id: userPageColumn
            anchors.top: parent.top
            anchors.left: parent.left
            anchors.right: parent.right

            spacing: 10
            anchors.topMargin: 10
            anchors.bottomMargin: 10

            SettingsContainer {
                id: contactsView
                buttonListModel: contacts
            }

            SettingsContainer {
                id: profileParametersView
                buttonListModel: profileParameters
            }

        }

        ScrollBar.vertical: ScrollBar { }
    }
}
