#include "genwidget.h"

genwidget::genwidget(QWidget *parent) : QWidget(parent)
{
    //this->setAutoFillBackground(true);
    this->resize(1024, 523);
    this->setWindowTitle("捕鱼达人");
//    this->setWindowFlags(Qt::Widget);
    this->setWindowIcon(QIcon("imag/fish.PNG"));//设置窗口图标

    QPalette palette;
    //palette.setColor(QPalette::Background,Qt::black);
    palette.setBrush(QPalette::Background,QBrush(QPixmap("imag/sea-index1.jpg")));
    this->setPalette(palette);

    //标签实例化
    this->simbtn=new QPushButton(this);
    this->simbtn->setIcon(QIcon("imag/sim.png"));
    this->simbtn->setIconSize(QSize(78, 50));
    this->simbtn->setFlat(true);
    simbtn->setFocusPolicy(Qt::NoFocus);

    this->midbtn=new QPushButton(this);
    this->midbtn->setIcon(QIcon("imag/mid.png"));
    this->midbtn->setIconSize(QSize(78, 50));
    this->midbtn->setFlat(true);
    midbtn->setFocusPolicy(Qt::NoFocus);

    this->hardbtn=new QPushButton(this);
    this->hardbtn->setIcon(QIcon("imag/hard.png"));
    this->hardbtn->setIconSize(QSize(78, 50));
    this->hardbtn->setFlat(true);
    hardbtn->setFocusPolicy(Qt::NoFocus);

    this->quitbtn=new QPushButton(this);
    this->quitbtn->setIcon(QIcon("imag/quit.png"));
    this->quitbtn->setIconSize(QSize(78, 50));
    this->quitbtn->setFlat(true);
    quitbtn->setFocusPolicy(Qt::NoFocus);


   this->vboxlayout=new QVBoxLayout(this);
   this->vboxlayout->addWidget(simbtn);
   this->vboxlayout->addWidget(midbtn);
   this->vboxlayout->addWidget(hardbtn);
   this->vboxlayout->addWidget(quitbtn);
   this->vboxlayout->setAlignment(Qt::AlignHCenter);

    connect(this->quitbtn,SIGNAL(clicked()),this,SLOT(backclicked()));
    connect(simbtn,SIGNAL(clicked()),this,SLOT(simbtnclicked()));

}
void genwidget::backclicked(){
    this->hide();
}
void genwidget::simbtnclicked(){
    sim.show();
}
void genwidget::midbtnclicked(){

}
void genwidget::hardbtnclicked(){

}
