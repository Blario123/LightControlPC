#include <QtWidgets>
#include <iostream>

#include "MainWindow.h"

MainWindow::MainWindow() {
    QWidget *widget;
    QVBoxLayout *layout;

    widget = new QWidget;
    layout = new QVBoxLayout;

    setCentralWidget(widget);

    layout->addWidget(createGroupBox());
    layout->setContentsMargins(0, 5, 0, 5);
    widget->setLayout(layout);

    createMenus();
    createActions();

    menuBar()->setHidden(true);

    setWindowTitle(tr("LightControlPC"));
    setMinimumSize(160, 160);
    resize(480, 320);
}

void MainWindow::keyPressEvent(QKeyEvent *event) {
    if(event->modifiers() & Qt::AltModifier) {
        menuBar()->setHidden(!menuBar()->isHidden());
        if(menuBar()->hasFocus()) {
            std::cout << "focus" << std::endl;
        }
    }
}

void MainWindow::about() {
    QMessageBox::about(this, tr("About Menu"), tr("The <b>Menu</b> example shows how to create ""menu-bar menus and context menus."));
}

void MainWindow::aboutQt() {
    QMessageBox::aboutQt(this, tr("About Menu"));
}

void MainWindow::createMenus() {
    helpMenu = menuBar()->addMenu(tr("&Help"));
}

void MainWindow::createActions() {
    aboutAct = helpMenu->addAction(tr("&About"), this, &MainWindow::about);
    aboutQtAct = helpMenu->addAction(tr("&About Qt"), this, &MainWindow::aboutQt);

    helpMenu->setStatusTip(tr("Help Menu"));
    aboutAct->setStatusTip(tr("Show's the applications about box"));
    aboutQtAct->setStatusTip(tr("Show's the Qt about box"));
}

QGroupBox *MainWindow::createGroupBox() {
    QGroupBox *tabButtons;
    QHBoxLayout *tabLayout;

    tabButtons = new QGroupBox();
    tabLayout = new QHBoxLayout();
    homeButton = new QRadioButton();
    syncButton = new QRadioButton();
    NZXTButton = new QRadioButton();
    MSIButton = new QRadioButton();

    homeButton->setText(tr("Home"));
    syncButton->setText(tr("Sync"));
    NZXTButton->setText(tr("NZXT"));
    MSIButton->setText(tr("MSI"));

    homeButton->setChecked(true);

    tabLayout->addWidget(homeButton);
    tabLayout->addWidget(syncButton);
    tabLayout->addWidget(NZXTButton);
    tabLayout->addWidget(MSIButton);
    tabButtons->setLayout(tabLayout);
    tabButtons->setFixedHeight(30);

    return tabButtons;
}