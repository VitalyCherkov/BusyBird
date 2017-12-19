import QtQuick 2.9
import QtQuick.Controls 2.2
import QtQuick.Controls.Material 2.2
import QtQuick.Layouts 1.3

Rectangle {
    property real defaultHeight: 56
    property string title
    property string subtitle
    property string icon
    property string fontSource: "qrc:/upload/MaterialIcons.ttf"

    property real titlePixelSize: 16
    property real subtitlePixelSize: 14
    property color titleColor: "black"
    property color subtitleColor: Material.color(Material.Grey)
    property bool isBoldTitle: false

    id: currentDelegate
    anchors.left: parent.left
    anchors.right: parent.right
    implicitHeight: Math.max(textId.implicitHeight, defaultHeight)
    color: "transparent"

    FontLoader {
        id: loadedFont
        source: fontSource
    }

    Rectangle {
        id: iconId
        height: defaultHeight
        width: defaultHeight
        anchors.left: parent.left
        anchors.top: parent.top
        color: "transparent"

        Label {
            font.family: loadedFont.name
            text: loadedFont.status == FontLoader.Ready ? icon : ""
            font.pixelSize: 25
            anchors.verticalCenter: parent.verticalCenter
            anchors.horizontalCenter: parent.horizontalCenter
        }
    }

    TextWithSubtext {
        id: textId
        title: currentDelegate.title
        subtitle: currentDelegate.subtitle
        minHeight: defaultHeight

        titlePixelSize: parent.titlePixelSize
        subtitlePixelSize: parent.subtitlePixelSize
        titleColor: parent.titleColor
        subtitleColor: parent.subtitleColor
        isBoldTitle: parent.isBoldTitle

        anchors.left: iconId.right
        anchors.right: parent.right
        anchors.top: parent.top
        anchors.bottom: parent.bottom
        anchors.leftMargin: 0
    }
}
