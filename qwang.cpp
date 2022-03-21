#include "qwang.h"

QWang::QWang(const QString & fileName,QGraphicsScene *scence):QpixmapItem(fileName,scence)
{

}

void QWang:: advance(int phase){
    if (this->collidingItems().count()>0){
        QList<QGraphicsItem *> list = this->collidingItems();
        QList<QGraphicsItem *>::Iterator i;
        QFish *fish;
        i = list.begin();
        while(i != list.end()){
            fish=(QFish *)(*i);
            fish->fish_death();
            i++;
        }
    }
    this->hide();
    delete this;
}
