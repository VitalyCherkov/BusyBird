import QtQuick 2.9
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3
import QtQuick.Controls.Material 2.2

ItemDelegate {
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

    implicitHeight: contentId.implicitHeight
    anchors.left: parent.left
    anchors.right: parent.right

    IconTextSubtext {
        id: contentId
        anchors.verticalCenter: parent.verticalCenter
        defaultHeight: parent.defaultHeight
        title: parent.title
        subtitle: parent.subtitle
        icon: parent.icon
        fontSource: parent.fontSource

        titlePixelSize: parent.titlePixelSize
        subtitlePixelSize: parent.subtitlePixelSize
        titleColor: parent.titleColor
        subtitleColor: parent.subtitleColor
        isBoldTitle: parent.isBoldTitle
    }
}
