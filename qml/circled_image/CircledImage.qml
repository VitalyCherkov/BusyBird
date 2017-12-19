import QtQuick 2.9
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3
import QtGraphicalEffects 1.0

Item {
    property real sideLen
    property string imagePath
    property real aroundSpacing: 0

    width: sideLen
    height: sideLen

    Image {
        anchors.centerIn: parent
        id: itemLogo
        source: imagePath
        layer.enabled: true
        width: itemLogoMask.width
        height: itemLogoMask.height

        layer.effect: OpacityMask {
            maskSource: itemLogoMask
        }

    }

    Rectangle {
        id: itemLogoMask
        visible: false
        width: sideLen - aroundSpacing * 2
        height: sideLen - aroundSpacing * 2
        radius: sideLen / 2
    }
}
