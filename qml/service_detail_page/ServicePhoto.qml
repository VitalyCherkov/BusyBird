import QtQuick 2.9
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3
import QtQuick.Controls.Material 2.2

Image {
    id: servicePhoto
    source: "qrc:/upload/avatar_256.png"
    anchors.left: parent.left
    anchors.top: parent.top
    anchors.right: parent.right
    clip: true
    fillMode: Image.PreserveAspectCrop
    height: 200
}
