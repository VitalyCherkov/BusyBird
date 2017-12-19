import QtQuick 2.9
import QtQuick.Controls 2.2
import QtQuick.Controls.Material 2.2
import QtQuick.Layouts 1.3
import "../circled_image"

Rectangle {
    id: serviceShort
    property string title
    property string subtitle
    property real lowerPrice
    property real topPrice
    property string imageSource
    property real defaulHeight: 130
    implicitHeight: Math.max(defaulHeight, serviceShortContent.implicitHeight)
    color: "transparent"

    CircledImage {
        id: serviceShortImage
        imagePath: imageSource
        sideLen: defaulHeight
        anchors.left: parent.left
        anchors.top: parent.top
        aroundSpacing: 10
    }

    ColumnLayout {
        id: serviceShortContent
        anchors.left: serviceShortImage.right
        anchors.right: parent.right
        anchors.top: parent.top
        TextWithSubtext {
            title: serviceShort.title
            titlePixelSize: 18
            subtitle: serviceShort.subtitle
        }

        TextWithSubtext {
            title: "%1 - %2 ₽".arg(serviceShort.lowerPrice).arg(serviceShort.topPrice)
            titlePixelSize: 20
            titleColor: Material.color(Material.Pink)
        }
    }
}
