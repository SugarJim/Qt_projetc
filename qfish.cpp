#include "qfish.h"

QFish::QFish(const QString & fileName,QGraphicsScene *scence):QpixmapItem(fileName,scence)
{
    setPos(-50,qrand()%400);
}
void QFish::advance(int phase){
    if (mapToScene(0,0).y() <= 0 || mapToScene(0,0).x() >= 1024){
        setPos(-50, qrand() % 400);
    }

    int speed = qrand() % 10;
    this->setPos(mapToScene(speed,-1));
}

void QFish::fish_death(){
    setPos(-50, qrand() % 400);
}
