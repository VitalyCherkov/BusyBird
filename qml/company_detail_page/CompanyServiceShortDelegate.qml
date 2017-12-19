import QtQuick 2.9
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3
import QtQuick.Controls.Material 2.2
import "../delegates"

Pane {
    height: companyServiceShortDelegateId.height
    padding: 0
    anchors.topMargin: 10
    ServiceShortDelegate {
        id: companyServiceShortDelegateId
        title: model.label
        subtitle: model.companyLabel
        lowerPrice: model.lowerPrice
        topPrice: model.topPrice
        onClicked: {
            fullService = !fullService
        }
    }
}
