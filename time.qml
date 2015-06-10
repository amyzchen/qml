import QtQuick 1.1

Rectangle {
    width: 600
    height: 400
    
    Text { text: ApplicationData.getCurrentDateTime() 
                 anchors.centerIn: parent
                 color: "blue"
                 font.pointSize: 18; font.bold: false
         }
}