#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
class QAction;;
class QLabel;
class QMenu;
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
Q_OBJECT

public:
    MainWindow();

private slots:
    void about();
    void aboutQt();

private:
    void createActions();
    void createMenus();

    QMenu *helpMenu{};
    QAction *aboutAct{};
    QAction *aboutQtAct{};
    QLabel *infoLabel;
};

#endif