import QtQuick 2.9
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3

ToolBar {
    id: footerToolBar

    RowLayout {
        anchors.fill: parent
        property real numberOfButtons: 5
        spacing: 0

        FooterToolBarItem {
            id: searching
            symbol: qsTr("")
        }

        FooterToolBarItem {
            id: notifications
            symbol: qsTr("")
        }

        FooterToolBarItem {
            id: burn
            symbol: qsTr("")
        }

        FooterToolBarItem {
            id: work
            symbol: qsTr("")
        }

        FooterToolBarItem {
            id: user
            symbol: qsTr("")
        }
    }
}
