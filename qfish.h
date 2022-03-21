#ifndef QFISH_H
#define QFISH_H

#include "qpixmapitem.h"
#include <QGraphicsScene>

class QFish : public QpixmapItem
{
public:
    QFish(const QString & fileName,QGraphicsScene *scence);
    void advance(int phase);
    void fish_death();
};

#endif // QFISH_H
