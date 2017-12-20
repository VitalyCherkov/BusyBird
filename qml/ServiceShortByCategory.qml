import QtQuick 2.0
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3
import QtQuick.Controls.Material 2.2
import controllers 1.0
import "delegates"

Pane {
    property StackView currentStackView

    id: serviceShortItem
    width: parent.width
    height: serviceShortItemInner.height
    padding: 0
    anchors.left: parent.left
    anchors.right: parent.right
    Material.elevation: 1

    ServiceShortDelegate {
        id: serviceShortItemInner
        title: model.label
        subtitle: model.companyLabel
        lowerPrice: model.lowerPrice
        topPrice: model.topPrice
        onClicked: {
            searchStackView.push("qrc:/qml/service_detail_page/ServiceDetailPage.qml",
                                        {currentStackView : serviceShortItem.currentStackView})
            serviceDetailController.loadServiceDetail(loadedService, model.id)
        }
    }
}
