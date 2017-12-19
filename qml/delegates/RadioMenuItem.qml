import QtQuick 2.9
import QtQuick.Controls 2.2
import QtQuick.Controls.Material 2.2
import QtQuick.Layouts 1.3

RadioDelegate {
    id: switcherMenuItem
    anchors.fill: parent
    font.pixelSize: 16
    text: model.title
    ButtonGroup.group: model.radioGroup
}
