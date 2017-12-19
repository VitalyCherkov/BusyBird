import QtQuick 2.9
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3
import QtQuick.Controls.Material 2.2
import "../circled_image"
import "../header_toolbar"

Rectangle {
    id: serviceCategory
    anchors.left: parent.left
    anchors.right: parent.right
    color: "transparent"
    height: serviceCategoryText.implicitHeight
    Label {
        id: serviceCategoryText
        anchors.fill: parent
        text: qsTr(loadedService.categoryName)
        color: Material.color(Material.Grey)
        font.pixelSize: 16
        anchors.leftMargin: 20
    }
}
