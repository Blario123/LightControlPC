#include <QtWidgets>

#include "MainWindow.h"

MainWindow::MainWindow() {
    QWidget *widget;
    QWidget *topFiller;
    QWidget *bottomFiller;
    QVBoxLayout *layout;

    widget = new QWidget;
    topFiller = new QWidget;
    bottomFiller = new QWidget;
    layout = new QVBoxLayout;

    setCentralWidget(widget);
    topFiller->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    infoLabel = new QLabel(tr("<i>Choose a menu option, or right-click to "
                              "invoke a context menu</i>"));
    infoLabel->setFrameStyle(QFrame::StyledPanel | QFrame::Sunken);
    infoLabel->setAlignment(Qt::AlignCenter);


    bottomFiller->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    layout->setContentsMargins(5, 5, 5, 5);
    layout->addWidget(topFiller);
    layout->addWidget(infoLabel);
    layout->addWidget(bottomFiller);
    widget->setLayout(layout);
    createActions();
    createMenus();

    QString message = tr("A context menu is available by right-clicking");
    statusBar()->showMessage(message);

    setWindowTitle(tr("Menus"));
    setMinimumSize(160, 160);
    resize(480, 320);
}

void MainWindow::about() {
    QMessageBox::about(this, tr("About Menu"), tr("The <b>Menu</b> example shows how to create ""menu-bar menus and context menus."));
}

void MainWindow::aboutQt() {
    infoLabel->setText(tr("Invoked <b>Help|About Qt</b>"));
}

void MainWindow::createMenus() {
    helpMenu = menuBar()->addMenu(tr("&File"));
    helpMenu->addAction(aboutAct);
    helpMenu->addAction(aboutQtAct);
}

void MainWindow::createActions() {
    helpMenu = menuBar()->addMenu(tr("&Help"));

    aboutAct = helpMenu->addAction(tr("&About"), this, &MainWindow::about);
    aboutQtAct = helpMenu->addAction(tr("&About Qt"), this, &MainWindow::aboutQt);

    helpMenu->setStatusTip(tr("Help Menu"));
    aboutAct->setStatusTip(tr("Show's the applications about box"));
    aboutQtAct->setStatusTip(tr("Show's the Qt about box"));
}