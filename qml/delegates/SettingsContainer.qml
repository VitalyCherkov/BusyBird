import QtQuick 2.9
import QtQuick.Controls 2.2
import QtQuick.Controls.Material 2.2
import QtQuick.Layouts 1.3

Pane {
    id: menuButtonsPane
    Material.elevation: 2
    leftPadding: 0
    rightPadding: 0
    anchors.left: parent.left
    anchors.right: parent.right
    contentHeight: menuButtonsListView.height
    property ListModel buttonListModel
    property real totalHeight: 0
    property bool is_interactive: false

    ListView {
        property real itemHeight: 40
        id: menuButtonsListView
        model: buttonListModel
        anchors.fill: parent
        interactive: is_interactive

        delegate: Component {
            Loader {
                id: menuItemLoader
                anchors.left: parent.left
                anchors.right: parent.right
                source: {
                    switch(model.type) {
                    case "": return "qrc:/qml/delegates/UsualMenuItem.qml"
                    case "S": return "qrc:/qml/delegates/SwitcherMenuItem.qml"
                    case "R": return "qrc:/qml/delegates/RadioMenuItem.qml"
                    case "C": return "qrc:/qml/delegates/ContactMenuItem.qml"
                    }
                }

                height: Math.max(menuButtonsListView.itemHeight, childrenRect.height)
                onLoaded: menuButtonsPane.height += height
            }
        }

        onCountChanged: {
            parent.height = totalHeight
        }
    }
}
