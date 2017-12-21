import QtQuick 2.9
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3
import QtQuick.Controls.Material 2.2
import "../circled_image"
import loadedModels 1.0

//  Цена услуги
//      Цена от до
//      Подробности ценообразования

Pane {
    property PriceInfo currentServicePrice

    Material.elevation: 1
    anchors.left: parent.left
    anchors.right: parent.right
    implicitHeight: 80
    leftPadding: 20
    rightPadding: 20
    
    Label {
        id: servicePriceTextS
        text: {
            var priceLine = "%1 - %2 ₽"
            return priceLine.arg(currentServicePrice.lower).arg(currentServicePrice.top)
        }
        font.pixelSize: 25
        anchors.left: parent.left
        anchors.verticalCenter: parent.verticalCenter
        color: Material.color(Material.Pink)
    }
    
    Button {
        anchors.verticalCenter: parent.verticalCenter
        anchors.right: parent.right
        id: priceDetails
        text: "Подробнее"
        Material.background: Material.Pink
        Material.foreground: "white"
    }
}
