#include <QApplication>
#include <QDeclarativeView>
#include <QDeclarativeContext>

#include "main.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QDeclarativeView view;

    ApplicationData data;
    view.rootContext()->setContextProperty("ApplicationData", QVariant::fromValue(&data));
    view.setSource(QUrl("../time.qml"));
    view.show();

    return a.exec();
}
