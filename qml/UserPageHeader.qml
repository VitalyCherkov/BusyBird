import QtQuick 2.9
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3
import "circled_image"
import "delegates"

ToolBar {
    //pageTitle: "Имечко Фамилия"
    height: 100
    
    CircledImageTextSubtext {
        imageSource: "qrc:/upload/avatar_128.png"
        defaultHeight: parent.height
        anchors.fill: parent
        titleColor: "white"
        subtitleColor: "white"
        titlePixelSize: 18
        subtitlePixelSize: 18
        imageAroundSpacing: 10
        title: qsTr("Имечко Фамилия")
        subtitle: qsTr(" 4.5")
    }
}
