import QtQuick 2.9
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3

Page {
    id: startPage

    Image {
        id: startImage
        source: "qrc:/upload/logo.png"
        width: 300
        height: width
        anchors.centerIn: parent
    }
}
