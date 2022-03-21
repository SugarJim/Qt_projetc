#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QIcon>
#include <QPalette>
#include <QBrush>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QObject>
#include <QMessageBox>
#include "genwidget.h"

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    QPushButton *startbtn;
    QPushButton *setbtn;
    QPushButton *helpbtn;
    QPushButton *quitbtn;
    QVBoxLayout *vboxlayout;
//    QWidget *widget;
    genwidget w;
public slots:
    void startbtnclicked();
    void quitbtnclicked();

};
#endif // MAINWINDOW_H
