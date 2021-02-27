#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QRadioButton>
#include <QWidget>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QGridLayout>
#include <QLabel>
#include <QGroupBox>
#include <QStackedWidget>

QT_BEGIN_NAMESPACE
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
Q_OBJECT

public:
    MainWindow();

private:
    QRadioButton *syncButton{};
    QRadioButton *NZXTButton;
    QRadioButton *MysticButton;
    QRadioButton *settingsButton;
    QWidget *MainWidget;
    QVBoxLayout *layout;
    QHBoxLayout *buttonLayout;
    QGridLayout *syncLayout;
    QGridLayout *NZXTLayout;
    QGridLayout *MysticLayout;
    QGridLayout *settingsLayout;
    QLabel *syncPageText;
    QLabel *NZXTPageText;
    QLabel *MysticPageText;
    QLabel *settingsPageText;
    QGroupBox *groupBox;
    QStackedWidget *LCPPages;
    QWidget *syncPage;
    QWidget *NZXTPage;
    QWidget *MysticPage;
    QWidget *settingsPage;

    void instantiateTypes();
    void createActions();
};

#endif