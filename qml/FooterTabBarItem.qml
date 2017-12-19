import QtQuick 2.9
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3
import QtQuick.Controls.Material 2.2

TabButton {
    id: tabBarButtonItem
    property string symbol: ""

    Layout.alignment: Text.AlignHCenter

    Text {
        FontLoader {
            id: materialIcons
            source: "qrc:/upload/MaterialIcons.ttf"
        }

        font.family: materialIcons.name
        font.pixelSize: 25
        text: materialIcons.status == FontLoader.Ready ? symbol : ""
        color: Material.color(Material.Indigo)
        anchors.fill: parent
        verticalAlignment: Text.AlignVCenter
        horizontalAlignment: Text.AlignHCenter
    }
}
