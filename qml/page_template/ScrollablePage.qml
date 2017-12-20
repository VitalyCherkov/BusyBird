import QtQuick 2.9
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3
import QtQuick.Controls.Material 2.2
import "../header_toolbar"

Page {
    id: scrollablePage
    property string pageTitle
    property StackView currentStackView
    property Component pageContent

    header: HeaderToolBar {
        ToolButton {
            text: qsTr("")
            font.pixelSize: 25
            anchors.left: parent.left
            anchors.leftMargin: 10
            anchors.verticalCenter: parent.verticalCenter
            onClicked: currentStackView.pop()
        }

        pageTitle: scrollablePage.pageTitle
    }

    Flickable {
        anchors.fill: parent
        contentHeight: scrollablePageContentLoader.implicitHeight
        Loader {
            id: scrollablePageContentLoader
            anchors.fill: parent
            anchors.left: parent.left
            anchors.right: parent.right
            sourceComponent: pageContent
        }
        ScrollBar.vertical: ScrollBar { }
    }
}
