import QtQuick 2.9
import QtQuick.Controls 2.2
import QtQuick.Controls.Material 2.2
import QtQuick.Layouts 1.3

ItemDelegate {
    id: contactMenuItem
    anchors.fill: parent
    property real defaultHeight: 56
    height: defaultHeight

    function contactSourceToIcon(sourceCode) {
        switch(sourceCode) {
        case "GH": return qsTr("")
        case "YT": return qsTr("")
        case "SMS": return qsTr("")
        case "WEB": return qsTr("")
        case "PH": return qsTr("")
        case "EML": return qsTr("")
        case "VK": return qsTr("")
        case "OK": return qsTr("")
        case "SKP": return qsTr("")
        case "FB": return qsTr("")
        case "TW": return qsTr("")
        case "IN": return qsTr("")
        case "TLG": return qsTr("")
        case "ICQ": return qsTr("")
        case "WTS": return qsTr("")
        case "VIB": return qsTr("")
        default: return qsTr("")
        }
    }

    IconTextSubtext {
        anchors.fill: parent
        defaultHeight: parent.defaultHeight
        title: model.data
        subtitle: model.description
        icon: contactMenuItem.contactSourceToIcon(model.source)
        fontSource: "qrc:/upload/Socials.ttf"
    }
}
