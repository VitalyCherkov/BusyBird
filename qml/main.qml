import QtQuick 2.9
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3

ApplicationWindow {
    visible: true
    width: 600
    height: 600
    title: qsTr("BusyBird")

    SwipeView {
        anchors.fill: parent
        id: mainSwipeView
        width: parent.width
        currentIndex: mainTabBar.currentIndex

        StackView {
            id: searchStackView
            initialItem: Categories {
                currentStackView: searchStackView
            }
        }
        StackView {
            id: notifications
            initialItem: StartPage { }
        }
        StackView {
            id: burn
            initialItem: StartPage { }
        }
        StackView {
            id: work
            initialItem: StartPage { }
        }
        StackView {
            id: user
            initialItem: UserPage { }
        }
    }

    footer: FooterTabBar {
        id: mainTabBar
        currentIndex: mainSwipeView.currentIndex
    }
}
