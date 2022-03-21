#include "mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent)
{
    this->resize(1024, 523);
    this->setWindowTitle("捕鱼达人");

    this->setWindowIcon(QIcon("imag/fish.PNG"));//设置窗口图标

    QPalette palette;
    //palette.setColor(QPalette::Background,Qt::black);
    palette.setBrush(QPalette::Background,QBrush(QPixmap("imag/sea-index1.jpg")));
    this->setPalette(palette);

 //   w = new genwidget(this);
//    w->hide();


    //标签实例化

    this->startbtn=new QPushButton(this);
    this->startbtn->setIcon(QIcon("imag/start.png"));
    this->startbtn->setIconSize(QSize(78, 50));
    this->startbtn->setFlat(true);
    startbtn->setFocusPolicy(Qt::NoFocus);

    this->setbtn=new QPushButton(this);
    this->setbtn->setIcon(QIcon("imag/set.png"));
    this->setbtn->setIconSize(QSize(78, 50));
    this->setbtn->setFlat(true);
    setbtn->setFocusPolicy(Qt::NoFocus);


    this->helpbtn=new QPushButton(this);
    this->helpbtn->setIcon(QIcon("imag/help.png"));
    this->helpbtn->setIconSize(QSize(78, 50));
    this->helpbtn->setFlat(true);
    helpbtn->setFocusPolicy(Qt::NoFocus);


    this->quitbtn=new QPushButton(this);
    this->quitbtn->setIcon(QIcon("imag/quit.png"));
    this->quitbtn->setIconSize(QSize(78, 50));
    this->quitbtn->setFlat(true);
    quitbtn->setFocusPolicy(Qt::NoFocus);

    //创建布局
    this->vboxlayout=new QVBoxLayout(this);
    this->vboxlayout->addWidget(startbtn);
    this->vboxlayout->addWidget(setbtn);
    this->vboxlayout->addWidget(helpbtn);
    this->vboxlayout->addWidget(quitbtn);
    this->vboxlayout->setAlignment(Qt::AlignHCenter);

    connect(startbtn,SIGNAL(clicked()),this,SLOT(startbtnclicked()));
    connect(this->quitbtn,SIGNAL(clicked()),this,SLOT(quitbtnclicked()));
}

MainWindow::~MainWindow()
{
    //delete ui;
}

void MainWindow::startbtnclicked(){

//    this->hide();
    w.show();

}
void MainWindow::quitbtnclicked(){
    if (QMessageBox::Yes==QMessageBox::question(this,"提示","你是否需要退出？？",QMessageBox::Yes|QMessageBox::No)){
        this->close();
    }

}
