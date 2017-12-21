import QtQuick 2.9
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3
import QtQuick.Controls.Material 2.2
import "../circled_image"
import "../delegates"
import loadedModels 1.0

//  Компания
//      Заголовок
//          Лого Название Рейтинг
//      Город
//      Район
//      Адрес комании
//      Описание времени работы

Pane {
    id: companyInfo
    property StackView currentStackView
    property CompanyShort currentShortCompany
    Material.elevation: 1
    anchors.left: parent.left
    anchors.right: parent.right
    contentHeight: companyInfoColumn.height
    padding: 0

    ItemDelegate {
        implicitHeight: companyInfoColumn.height
        anchors.fill: parent
        padding: 10
        onClicked: {
            currentStackView.push("qrc:/qml/company_detail_page/CompanyDetailPage.qml",
                                  {currentStackView : companyInfo.currentStackView})
            //currentStackView.push("qrc:/qml/company_detail_page/CompanyDetailPage.qml")
        }

        ColumnLayout {
            id: companyInfoColumn
            anchors.left: parent.left
            anchors.right: parent.right

            CircledImageTextSubtext {
                defaultHeight: 64
                imageSource: "qrc:/upload/avatar_128.png"
                title: currentShortCompany.label
                subtitle: currentShortCompany.description
            }
            IconTextSubtext {
                id: serviceCompanyCity
                icon: ""
                title: {
                    var city = currentShortCompany.location.region
                    var district = currentShortCompany.location.district
                    return "%1, %2".arg(city).arg(district)
                }
                subtitle: currentShortCompany.location.address
                defaultHeight: 40
            }
            IconTextSubtext {
                id: serviceCompanyTimeDescription
                icon: ""
                title: currentShortCompany.timeDescription
                defaultHeight: 40
            }
        }
    }
}
