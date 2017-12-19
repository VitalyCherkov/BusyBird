import QtQuick 2.9
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3
import QtQuick.Controls.Material 2.2
import "../circled_image"
import "../header_toolbar"

Rectangle {
    id: serviceLabel
    anchors.left: parent.left
    anchors.right: parent.right
    color: "transparent"
    height: serviceLabelText.implicitHeight
    Label {
        id: serviceLabelText
        anchors.fill: parent
        text: qsTr(loadedService.label)
        font.pixelSize: 25
        anchors.leftMargin: 20
    }
}
