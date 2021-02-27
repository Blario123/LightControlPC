#include <QtWidgets>
#include <QMessageBox>

#include "aboutMenu.h"
#include "MainWindow.h"

void AboutMenu::AboutMenu::aboutQt(){
    QMessageBox::aboutQt(MainWindow().parentWidget(), QMessageBox::tr("About Qt"));
}

void AboutMenu::AboutMenu::about(){
    QMessageBox::about(MainWindow().parentWidget(), QMessageBox::tr("About"), QMessageBox::tr("The <b>About</b> Menu and Message box"));
}
