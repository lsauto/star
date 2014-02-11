#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "StelMainGraphicsView.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    scene.addItem(&stelapp);
    setAttribute(Qt::WA_NoSystemBackground);
    view = new StelMainGraphicsView(&scene, this);

    setCentralWidget(view);

    //timer.start(1000/33);
    //resume();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setFullScreen(bool b)
{
    if(b)
        setWindowState(windowState() | Qt::WindowFullScreen);
    else
        setWindowState(windowState() & ~Qt::WindowFullScreen);
}

void MainWindow::init()
{
    int width = 800;
    int height = 600;
    resize(width, height);

//    setFullScreen(true);

    show();
}

void MainWindow::pause()
{
    disconnect(&timer, SIGNAL(timeout()),
               &scene, SLOT(advance()));
}

void MainWindow::resume()
{
    connect(&timer, SIGNAL(timeout()),
            &scene, SLOT(advance()));
}
