#ifndef QGUN_H
#define QGUN_H

#include <QGraphicsItem>
#include <QPixmap>
#include <QPainter>
#include <QString>
#include <qpixmapitem.h>
#include "qpixmapitem.h"
#include <QRectF>

class QGun : public QpixmapItem
{
public:
    QGun(const QString & fileName,QGraphicsScene *scence);
//    virtual QRectF boundingRect() const;
//    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
//private:
//    QPixmap pixmap;
};

#endif // QGUN_H
