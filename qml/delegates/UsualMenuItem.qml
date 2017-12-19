import QtQuick 2.9
import QtQuick.Controls 2.2
import QtQuick.Controls.Material 2.2
import QtQuick.Layouts 1.3

ItemDelegate {
    id: usualMenuItem
    anchors.fill: parent
    font.pixelSize: 16
    text: model.title
    onClicked: buttonListModel.actions(model.index)
}
