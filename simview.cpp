#include "simview.h"

simview::simview()
{
    this->resize(1024, 523);
    this->setWindowTitle("捕鱼达人");
    this->setWindowIcon(QIcon("imag/fish.PNG"));//设置窗口图标

    this->setBackgroundBrush(QBrush(QPixmap("imag/sea-game.jpg")));

    this->setMouseTracking(true);

    simpscence=new QGraphicsScene;
    simpscence->setSceneRect(0,0,this->width()-2,this->height()-2);
    this->setScene(simpscence);

    //绘制大炮
    gun=new QGun("imag/pao.png",simpscence);
    gun->setPos(this->width()/2,this->height());
    //gun->setFocusProxy(gun);
    //scence->addItem(gun);

    fish1=new QFish("imag/bigfish.png",simpscence);
    //fish1->setPos(0,100);
    //scence->addItem(fish1);

    fish2=new QFish("imag/bigfish.png",simpscence);
    //fish2->setPos(0,200);
    //scence->addItem(fish2);

    fish3=new QFish("imag/bigfish.png",simpscence);
    //fish3->setPos(0,300);
    //scence->addItem(fish3);
    fish4=new QFish("imag/fish2.png",simpscence);
    fish5=new QFish("imag/fish2.png",simpscence);
    //fish5->setPos(0,350);
    //scence->addItem(fish5);

    //bullet=new Qbullet("imag/paodan.png");
    //scence->addItem(bullet);

    //定时器
    timer=new QTimer;
    connect(timer,SIGNAL(timeout()),simpscence,SLOT(advance()));
    timer->start(100);



}
void simview::resizeEvent(QResizeEvent *event){
    this->setBackgroundBrush(QBrush(QPixmap("imag/sea-game.jpg").scaled(event->size())));
}

void simview::mouseMoveEvent(QMouseEvent *event){
    QPoint p;
    p = event->pos();
    QLine line(this->width()/2,this->height(),p.x(),p.y());
    QLineF linef(line);
    gun->setRotation(90-linef.angle());
}

void simview:: mousePressEvent(QMouseEvent *event){
    QPoint p = event->pos();
    QLineF linef(this->width()/2,this->height(),p.x(),p.y());

    //QLineF linef(this->width()/2,this->height(),p.x(),p.y());
    Qbullet *bullet = new Qbullet("imag/paodan.png",simpscence,linef.angle());
    simpscence->addItem(bullet);
//    bullet->setPos(this->width()/2+dx, this->height()-dy);
//    bullet->setRotation(90-linef.angle());

}
