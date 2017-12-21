import QtQuick 2.9
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3
import test 1.0
import "header_toolbar"

Page {
    id: categoryListPage
    property StackView currentStackView

    header: HeaderToolBar {
        pageTitle: qsTr("Категории")
    }

    ListView {
        id: categoryListView
        anchors.fill: parent
        topMargin: 10
        bottomMargin: 10
        spacing: 10
        model: CategoriesListModel { }

        delegate: CircledContactDelegate {
            currentStackView: categoryListPage.currentStackView
        }
    }
}
