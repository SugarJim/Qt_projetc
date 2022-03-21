#ifndef SIMVIEW_H
#define SIMVIEW_H

#include <QGraphicsView>
#include <QIcon>
#include <QBrush>
#include <QGraphicsScene>
#include <QResizeEvent>
#include "qgun.h"
#include "qfish.h"
#include "qbullet.h"
#include <QTimer>
#include <QPoint>
#include <QLine>
#include <QLineF>

class simview:public QGraphicsView
{
public:
    simview();
    void resizeEvent(QResizeEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mousePressEvent(QMouseEvent *event);
private:
    QGraphicsScene *simpscence;
    QGun *gun;
    QFish *fish1;
    QFish *fish2;
    QFish *fish3;
    QFish *fish4;
    QFish *fish5;

    QTimer *timer;
};

#endif // SIMVIEW_H
