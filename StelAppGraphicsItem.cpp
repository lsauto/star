#include "StelAppGraphicsItem.h"

StelAppGraphicsItem::StelAppGraphicsItem()
{
    tail << QPointF(1, 1);
    tail << QPointF(10, 10);
    tail << QPointF(20, 20);

}

QRectF StelAppGraphicsItem::boundingRect() const
{
    qreal minX = 100000;
    qreal minY = 100000;
    qreal maxX = 0;
    qreal maxY = 0;

    foreach (QPointF p, tail) {
        maxX = p.x() > maxX ? p.x() :maxX;
        maxY = p.y() > maxY ? p.y() :maxY;
        minX = p.x() < minX ? p.x() :minX;
        minY = p.y() < minY ? p.y() :minY;
    }

    QPointF tl = mapFromScene(QPointF(minX, minY));
    QPointF br = mapFromScene(QPointF(maxX, maxY));

    QRectF bound = QRectF(tl.x(),
                          tl.y(),
                          br.x()-tl.x() +1,
                          br.y()-tl.y() +1);
    return bound;
}

QPainterPath StelAppGraphicsItem::shape() const
{
    QPainterPath path;
    path.setFillRule(Qt::WindingFill);

    foreach(QPointF p, tail)
    {
        QPointF itemp = mapFromScene(p);
        path.addEllipse(itemp, 1, 1);
    }

    return path;
}


void StelAppGraphicsItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *)
{
    painter->save();
    painter->fillPath(shape(), Qt::yellow);
    painter->restore();
}

void StelAppGraphicsItem::advance(int step)
{
    if(!step)
        return;

    // Update
    int i = 0;
    foreach (QPointF p, tail) {
        tail[i++] = p + QPointF(3, 3);
    }

}
