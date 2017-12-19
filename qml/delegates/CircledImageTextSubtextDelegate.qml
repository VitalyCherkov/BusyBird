import QtQuick 2.9
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3
import QtQuick.Controls.Material 2.2

ItemDelegate {
    property real defaultHeight
    property string title
    property string subtitle
    property string imageSource

    property real titlePixelSize: 16
    property real subtitlePixelSize: 14
    property color titleColor: "black" //Material.color(Material.Black)
    property color subtitleColor: Material.color(Material.Grey)
    property bool isBoldTitle: false

    property real imageAroundSpacing: 5

    implicitHeight: contentId.implicitHeight
    anchors.left: parent.left
    anchors.right: parent.right



    CircledImageTextSubtext {
        id: contentId
        anchors.verticalCenter: parent.verticalCenter
        defaultHeight: parent.defaultHeight
        title: parent.title
        subtitle: parent.subtitle
        imageSource: parent.imageSource
        minHeight: defaultHeight
        titlePixelSize: parent.titlePixelSize
        subtitlePixelSize: parent.subtitlePixelSize
        titleColor: parent.titleColor
        subtitleColor: parent.subtitleColor
        isBoldTitle: parent.isBoldTitle
        imageAroundSpacing: parent.imageAroundSpacing
    }
}
