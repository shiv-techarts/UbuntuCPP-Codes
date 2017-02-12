import QtQuick 2.2
import QtQuick.Window 2.1

//import QtQuick 2.4
//import Ubuntu.Components 1.2

Column {
    width: units.gu(50)
    height: units.gu(100)

    Item {
        objectName: "passiveScope"
        width: parent.width
        height: units.gu(30)
        Rectangle {
            anchors.fill: parent
            color: "red"
            Item {
                objectName: "activeScope"
                //activeFocus: true
                anchors.fill: parent
            }
        }
    }

    Text {
        id: input
        text: "The input stays focus even if red box is clicked"
    }

    Component.onCompleted: input.forceActiveFocus()

    Connections {
        target: window
        onActiveFocusItemChanged: console.debug("focus on", window.activeFocusItem)
    }
}
