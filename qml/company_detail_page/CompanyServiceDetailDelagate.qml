import QtQuick 2.9
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3
import QtQuick.Controls.Material 2.2
import "../service_detail_page"
import loadedModels 1.0

Pane {
    height: companyServiceDetailDelegateId.implicitHeight + closeBtnId.height
    padding: 0
    Material.elevation: 2
    property LoadedServiceCompanyBase curService : LoadedServiceCompanyBase {}
    ServiceOnlyInfo {
        id: companyServiceDetailDelegateId
        anchors.top: parent.top
        currentService: {
            serviceDetailController.loadCompanyServiceDetail(curService, model.id)
            return curService
        }
    }
    Button {
        id: closeBtnId
        text: "Скрыть"
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.bottom: parent.bottom
        Material.elevation: 0
        height: 50
        onClicked: {
            fullService = !fullService
        }
    }
}
