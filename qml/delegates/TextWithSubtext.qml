import QtQuick 2.9
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3
import QtQuick.Controls.Material 2.2

Rectangle {
    property string title
    property string subtitle
    property real minHeight: 56
    property real titlePixelSize: 16
    property real subtitlePixelSize: 14
    property color titleColor: "black" //Material.color(Material.Black)
    property color subtitleColor: Material.color(Material.Grey)
    property bool isBoldTitle: false
    implicitHeight: Math.max(
                        minHeight,
                        centeredText.implicitHeight + 10
                    )

    color: "transparent"
    anchors.left: parent.left
    anchors.right: parent.right
    anchors.leftMargin: 10
    anchors.rightMargin: 10
    Rectangle {
        id: centeredText
        implicitHeight: 3 + titleId.implicitHeight +
                        (subtitle != "" ? subtitleId.implicitHeight : 0)
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.verticalCenter: parent.verticalCenter
        color: "transparent"
        Text {
            id: titleId
            text: title
            wrapMode: Text.WordWrap
            font.pixelSize: titlePixelSize
            color: titleColor
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.top: parent.top
            font.bold: isBoldTitle
        }

        Text {
            id: subtitleId
            text: subtitle
            wrapMode: Text.WordWrap
            font.pixelSize: subtitlePixelSize
            color: subtitleColor
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.bottom: parent.bottom
        }
    }
}
