#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include "myframe.h"
#include "mytable.h"
class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    MyTable * mytable;
    MyFrame * myframe;
    QPushButton * ButStart;
    QPushButton * butX;
    QPushButton * butO;
    QPushButton * butVsComp;
    QLabel * labelPlayer1;
    QLabel * labelPlayer2;
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public slots:
    void scoreLabel(int,int);
};
#endif // MAINWINDOW_H
