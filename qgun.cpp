#include "qgun.h"

QGun::QGun(const QString & fileName,QGraphicsScene *scence):QpixmapItem(fileName,scence)
{

}

//QRectF QGun:: boundingRect() const{
//    return QRectF(-pixmap.width()/2,-pixmap.height(),pixmap.width(),pixmap.height());
//}
//void QGun::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget){
//    painter->drawPixmap(-pixmap.width()/2,-pixmap.height(),pixmap);
//}
