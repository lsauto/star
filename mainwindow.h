#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QTimer>

namespace Ui {
class MainWindow;
}

class StelMainGraphicsView;
//class StelAppGraphicsItem;
#include"StelAppGraphicsItem.h"


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void setFullScreen(bool);
    void init();

private:  
    void resume();
    void pause();

    Ui::MainWindow *ui;

    QTimer timer;
    StelMainGraphicsView *view;
    QGraphicsScene scene;
    StelAppGraphicsItem stelapp;
};

#endif // MAINWINDOW_H
