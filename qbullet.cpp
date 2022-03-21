#include "qbullet.h"

Qbullet::Qbullet(const QString & fileName,QGraphicsScene *scence,qreal angle):QpixmapItem(fileName,scence)
{
    this->scence=scence;
    qreal dx, dy;
    qreal rad;
    rad = angle * 3.14 / 180;
    dx = 90 * cos(rad);
    dy = 90 * sin(rad);
    this->setPos(scence->width()/2+dx,scence->height()-dy);
    this->setRotation(90-angle);
}
void Qbullet::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget){
    painter->drawPixmap(-pixmap.width()/2,-pixmap.height(),pixmap);

    if(this->collidingItems().count() > 0){
        dolliding();
    }
}
void Qbullet:: advance(int phase){
    if (mapToScene(0,0).x() <= 0 || mapToScene(0,0).x() >= 1024 || mapToScene(0,0).y() <= 0){
        delete this;
    }else{
        this->setPos(mapToScene(0,-10));
    }

}

void Qbullet:: dolliding(){
    QWang *wang = new QWang("imag/wang.png",this->scence);
    wang->setPos(mapToScene(0,0));
    delete this;
}



