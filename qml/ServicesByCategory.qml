import QtQuick 2.0
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3
import QtQuick.Controls.Material 2.2
import test 1.0
import "header_toolbar"

Page {
    id: servicesByCategory

    property string categoryName
    property StackView currentStackView

    header: HeaderToolBar {

        ToolButton {
            text: qsTr("")
            font.pixelSize: 25
            anchors.left: parent.left
            anchors.leftMargin: 10
            anchors.verticalCenter: parent.verticalCenter
            onClicked: currentStackView.pop()
        }

        pageTitle: categoryName

        ToolButton {
            text: qsTr("")
            font.pixelSize: 25
            anchors.right: parent.right
            anchors.rightMargin: 10
            anchors.verticalCenter: parent.verticalCenter

            onClicked: currentStackView.push("qrc:/qml/ServicesFilters.qml", {currentStackView :
                                                 servicesByCategory.currentStackView})
        }
    }

    ListView {
        id: servicesByCategoryListView
        anchors.fill: parent
        model: ServicesList { }
        topMargin: 10
        bottomMargin: 10
        spacing: 10

        delegate: ServiceShortByCategory {
            currentStackView: servicesByCategory.currentStackView
        }
    }
}
