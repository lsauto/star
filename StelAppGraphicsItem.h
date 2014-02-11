#ifndef STELAPPGRAPHICSITEM_H
#define STELAPPGRAPHICSITEM_H

#include<QGraphicsItem>
#include<QPainter>

class StelAppGraphicsItem : public QGraphicsItem
{

public:
    StelAppGraphicsItem();

    QRectF boundingRect() const;
    QPainterPath shape() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *);

protected:
    void advance(int step);

private:
    QList<QPointF> tail;

};
#endif // STELAPPGRAPHICSITEM_H
