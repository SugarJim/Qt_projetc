#ifndef QWANG_H
#define QWANG_H

#include "qpixmapitem.h"
#include <QGraphicsScene>
#include "qfish.h"

class QWang:public QpixmapItem
{
public:
    QWang(const QString & fileName,QGraphicsScene *scence);
    void advance(int phase);
};

#endif // QWANG_H
