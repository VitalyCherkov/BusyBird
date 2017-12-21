import QtQuick 2.9
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3
import QtQuick.Controls.Material 2.2
import "../circled_image"
import "../header_toolbar"
import "../delegates"
import loadedModels 1.0

ColumnLayout {
    property BaseServiceDetail currentService

    id: serviceOnlyInfo
    anchors.left: parent.left
    anchors.right: parent.right
    spacing: 10
    
    //  Обложка услуги
    ImagePageLabel {
        imageSource: "qrc:/upload/avatar_256.png"
    }
    
    IconTextSubtextDelegate {
        title: currentService.label
        titlePixelSize: 25
        subtitlePixelSize: 16
        subtitle: currentService.categoryName
        icon: {
            if(currentService.isFavourite)
                return qsTr("")
            else
                return qsTr("")
        }
        onClicked: currentService.changeIsFavourite()
    }
    
    //  Описание услуги
    ServiceDescription {
        description: currentService.description
        id: serviceDescription
    }
    
    ServicePrice {
        id: servicePrice
        currentServicePrice: currentService.price
    }
}
