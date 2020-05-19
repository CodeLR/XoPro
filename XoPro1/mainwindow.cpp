#include "mainwindow.h"
#include <QFont>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle("XOProGame");
    mytable=new MyTable(this);
    myframe=new MyFrame(this);
    labelPlayer1=new QLabel(this);
    labelPlayer2=new QLabel(this);
    labelPlayer1->setText("P1 - ");
    labelPlayer2->setText("P2 - ");
    QFont font;
    font.setWeight(100);
    font.setPixelSize(25);
    labelPlayer1->setFont(font);
    labelPlayer2->setFont(font);
    ButStart=new QPushButton("START",this);
    myframe->addWidget(mytable,ButStart,labelPlayer1,labelPlayer2);
    setMinimumSize(QSize(325,400));
    setMaximumSize(QSize(325,400));
    setCentralWidget(myframe);
    connect(ButStart,SIGNAL(clicked()),mytable,SLOT(StartGameSlot()));
    connect(mytable,SIGNAL(summaScore(int,int)),this,SLOT(scoreLabel(int,int)));

}

MainWindow::~MainWindow()
{

}

void MainWindow::scoreLabel(int p1, int p2)
{
    qDebug()<<p1<<" "<<p2;
    QString _p1,_p2;
    _p1.setNum(p1);
    _p2.setNum(p2);
    labelPlayer1->clear();
    labelPlayer2->clear();
    labelPlayer1->setText("P1 - " + _p1 );
    labelPlayer2->setText("P2 - " + _p2 );
}
// на последнем ходе ничья ! fixed
