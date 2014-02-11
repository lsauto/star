
#include "StelMainGraphicsView.h"
#include <QGraphicsScene>

StelMainGraphicsView::StelMainGraphicsView(QWidget *parent) :
    QGraphicsView(parent)
{
    // Avoid white background at init
    setAttribute(Qt::WA_PaintOnScreen);
    setAttribute(Qt::WA_NoSystemBackground);
    setAttribute(Qt::WA_OpaquePaintEvent);
    setAutoFillBackground(true);
    setBackgroundRole(QPalette::Window);
    QPalette pal;
    pal.setColor(QPalette::Window, Qt::black);
    setPalette(pal);

    setScene(new QGraphicsScene(this));
    scene()->setItemIndexMethod(QGraphicsScene::NoIndex);
}

StelMainGraphicsView::StelMainGraphicsView(QGraphicsScene *scene,QWidget *parent) :
    QGraphicsView(scene, parent)
{
    // Avoid white background at init
   // setAttribute(Qt::WA_PaintOnScreen);
    //setAttribute(Qt::WA_NoSystemBackground);
    //setAttribute(Qt::WA_OpaquePaintEvent);
    //setAutoFillBackground(true);
    //setBackgroundRole(QPalette::Window);
    //QPalette pal;
   // pal.setColor(QPalette::Window, Qt::black);
    //setPalette(pal);

    //setScene(new QGraphicsScene(this));
    //scene()->setItemIndexMethod(QGraphicsScene::NoIndex);
}
