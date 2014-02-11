#ifndef STELMAINGRAPHICSVIEW_H
#define STELMAINGRAPHICSVIEW_H

#include <QGraphicsView>
#include <QGraphicsScene>


class StelMainGraphicsView : public QGraphicsView
{
    Q_OBJECT
public:
    StelMainGraphicsView(QWidget* parent);
    StelMainGraphicsView(QGraphicsScene *, QWidget*);
//     ~StelMainGraphicsView();

};
#endif // STELMAINGRAPHICSVIEW_H
