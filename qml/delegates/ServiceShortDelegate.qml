import QtQuick 2.0
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3
import QtQuick.Controls.Material 2.2

ItemDelegate {
    property string title
    property string subtitle
    property int lowerPrice
    property int topPrice

    anchors.left: parent.left
    anchors.right: parent.right
    anchors.top: parent.top
    height: serviceShortItemInner.implicitHeight
    
    ServiceShort {
        id: serviceShortItemInner
        title: parent.title
        subtitle: parent.subtitle
        lowerPrice: parent.lowerPrice
        topPrice: parent.topPrice
        imageSource: "qrc:/upload/avatar_128.png"
    }
}
