import QtQuick 2.9
import QtQuick.Controls 2.2
import QtQuick.Controls.Material 2.2
import QtQuick.Layouts 1.3
import "../circled_image"

Rectangle {
    property real defaultHeight: 56
    property string title
    property string subtitle
    property string imageSource

    property real titlePixelSize: 16
    property real subtitlePixelSize: 14
    property color titleColor: "black" //Material.color(Material.Black)
    property color subtitleColor: Material.color(Material.Grey)
    property bool isBoldTitle: false

    property real imageAroundSpacing: 5

    id: currentDelegate
    anchors.left: parent.left
    anchors.right: parent.right
    implicitHeight: textId.implicitHeight
    color: "transparent"

    CircledImage {
        id: imageId
        sideLen: defaultHeight
        aroundSpacing: imageAroundSpacing
        imagePath: imageSource
        anchors.left: parent.legt
        anchors.top: parent.top
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

        anchors.left: imageId.right
        anchors.right: parent.right
        anchors.top: parent.top
        anchors.bottom: parent.bottom
        anchors.leftMargin: 0
    }
}
