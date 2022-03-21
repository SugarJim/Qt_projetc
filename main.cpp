#include "mainwindow.h"
#include "genwidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //genwidget w;
    w.show();
    return a.exec();
}
