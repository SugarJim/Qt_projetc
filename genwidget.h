#ifndef GENWIDGET_H
#define GENWIDGET_H

#include <QMainWindow>
#include <QWidget>
#include <QIcon>
#include <QPalette>
#include <QBrush>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QObject>
#include "simview.h"

class genwidget : public QWidget
{
    Q_OBJECT
public:
    explicit genwidget(QWidget *parent = nullptr);
private:
    QPushButton *simbtn;
    QPushButton *midbtn;
    QPushButton *hardbtn;
    QPushButton *quitbtn;
    QVBoxLayout *vboxlayout;
    //QWidget *widget1;
    simview sim;

public slots:
    void simbtnclicked();
    void midbtnclicked();
    void hardbtnclicked();
    void backclicked();

signals:

};

#endif // GENWIDGET_H
