#include <QtWidgets>
#include <iostream>

#include "MainWindow.h"

MainWindow::MainWindow() {
    instantiateTypes();

    setCentralWidget(MainWidget);

    syncLayout->addWidget(syncPageText);
    syncLayout->setContentsMargins(0, 0, 0, 0);
    syncPage->setLayout(syncLayout);
    NZXTLayout->addWidget(NZXTPageText);
    NZXTLayout->setContentsMargins(0, 0, 0, 0);
    NZXTPage->setLayout(NZXTLayout);
    MysticLayout->addWidget(MysticPageText);
    MysticLayout->setContentsMargins(0, 0, 0, 0);
    MysticPage->setLayout(MysticLayout);
    settingsLayout->addWidget(settingsPageText);
    settingsLayout->setContentsMargins(0, 0, 0, 0);
    settingsPage->setLayout(settingsLayout);


    buttonLayout->addWidget(syncButton);
    buttonLayout->addWidget(NZXTButton);
    buttonLayout->addWidget(MysticButton);
    buttonLayout->addWidget(settingsButton);
    buttonLayout->setContentsMargins(0, 0, 0, 0);
    LCPPages->addWidget(syncPage);
    LCPPages->addWidget(NZXTPage);
    LCPPages->addWidget(MysticPage);
    LCPPages->addWidget(settingsPage);
    LCPPages->setCurrentIndex(0);

    groupBox->setLayout(buttonLayout);

    layout->addWidget(groupBox);
    layout->addWidget(LCPPages);

    layout->setContentsMargins(0, 0, 0, 0);
    MainWidget->setLayout(layout);

    createActions();

    setAttribute(Qt::WA_TranslucentBackground);
    setWindowTitle(tr("LightControlPC"));
    setMinimumSize(160, 160);
    resize(480, 320);
}

void MainWindow::instantiateTypes() {
    LCPPages = new QStackedWidget();
    syncPage = new QWidget();
    NZXTPage = new QWidget();
    MysticPage = new QWidget();
    settingsPage = new QWidget();
    syncButton = new QRadioButton("Sync");
    NZXTButton = new QRadioButton("NZXT");
    MysticButton = new QRadioButton("Mystic");
    settingsButton = new QRadioButton("Settings");
    MainWidget = new QWidget;
    layout = new QVBoxLayout;
    groupBox = new QGroupBox;
    buttonLayout = new QHBoxLayout;
    syncLayout = new QGridLayout;
    NZXTLayout = new QGridLayout;
    MysticLayout = new QGridLayout;
    settingsLayout = new QGridLayout;
    syncPageText = new QLabel("Sync");
    NZXTPageText = new QLabel("NZXT");
    MysticPageText = new QLabel("Mystic");
    settingsPageText = new QLabel("Settings");
}

void MainWindow::createActions() {

}