import QtQuick 2.9
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3

ToolBar {

    property string pageTitle: "page title"
    property real defaultHeight: pageLabel.height
    height: defaultHeight

    Label {
        id: pageLabel
        text: qsTr(pageTitle)
        font.pixelSize: 20
        padding: 14
        anchors.horizontalCenter: parent.horizontalCenter
    }
}
