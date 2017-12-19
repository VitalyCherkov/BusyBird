import QtQuick 2.9
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3
import QtQuick.Controls.Material 2.2

ItemDelegate {
    property string title
    property string subtitle
    property real minHeight: 56
    property real titlePixelSize: 16
    property real subtitlePixelSize: 14
    property color titleColor: "black" //Material.color(Material.Black)
    property color subtitleColor: Material.color(Material.Grey)
    property bool isBoldTitle: false

    implicitHeight: contentId.implicitHeight
    anchors.left: parent.left
    anchors.right: parent.right

    TextWithSubtext {
        id: contentId
        title: title
        subtitle: subtitle
        minHeight: minHeight
        titlePixelSize: titlePixelSize
        subtitlePixelSize: subtitlePixelSize
        titleColor: titleColor
        subtitleColor: subtitleColor
        isBoldTitle: isBoldTitle
    }
}
