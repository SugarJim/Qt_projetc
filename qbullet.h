#ifndef QBULLET_H
#define QBULLET_H

#include "qpixmapitem.h"

#include <QLineF>

#include <QGraphicsItem>
#include <QPixmap>
#include <QPainter>
#include <QRectF>
#include <QGraphicsScene>
#include "qpixmapitem.h"
#include "qwang.h"

class Qbullet : public QpixmapItem
{
public:
    Qbullet(const QString & fileName,QGraphicsScene *scence,qreal angle);
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    void advance(int phase);
    void dolliding();

private:
    QGraphicsScene *scence;

};

#endif // QBULLET_H
