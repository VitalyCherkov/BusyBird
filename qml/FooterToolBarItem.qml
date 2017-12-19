import QtQuick 2.9
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3

ToolButton {
    id: toolBarButtonItem
    property string symbol: ""

    Layout.alignment: Text.AlignHCenter

    Text {
        FontLoader {
            id: flatIcon
            source: "qrc:/upload/Flaticon.ttf"
        }

        font.family: "Flaticon"
        font.pixelSize: 20
        text: flatIcon.status == FontLoader.Ready ? symbol : ""
        color: "white"
        anchors.fill: parent
        verticalAlignment: Text.AlignVCenter
        horizontalAlignment: Text.AlignHCenter
    }
}


