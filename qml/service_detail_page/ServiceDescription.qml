import QtQuick 2.9
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3
import QtQuick.Controls.Material 2.2
import "../circled_image"
import "../header_toolbar"

Rectangle {
    property string description

    id: serviceDescription
    implicitHeight: serviceDescriptionText.contentHeight
    anchors.left: parent.left
    anchors.right: parent.right
    color: "transparent"
    
    Text {
        anchors.left: parent.left
        anchors.right: parent.right
        id: serviceDescriptionText
        wrapMode: Text.WordWrap
        text: description
        anchors.leftMargin: 20
        anchors.rightMargin: 10
    }
}
