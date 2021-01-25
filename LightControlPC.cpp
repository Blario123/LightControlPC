#include <QApplication>
#include <QtCore/QFile>

#include "MainWindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow window;
    QFile file(":/resources/stylesheets/LightControlPC.qss");
    file.open(QFile::ReadOnly);
    QString LightControlPCStylesheet = QLatin1String(file.readAll());
    window.setStyleSheet(LightControlPCStylesheet);
    window.show();
    return app.exec();
}