#include <QtWidgets>
#include <iostream>

#include "aboutMenu.h"

void aboutMenu::about() {
    QMessageBox::about(this, tr("About"), tr("The <b>About</b> Menu and Message box"));
}

void aboutMenu::aboutQt() {
    QMessageBox:: aboutQt(this, tr("About Qt"));
}