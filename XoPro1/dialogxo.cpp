#include "dialogxo.h"
#include <QDebug>
DialogXo::DialogXo(QWidget * parent):QDialog(parent)
{
    but1=new QPushButton(this);
    but2=new QPushButton(this);
    butComputer=new QPushButton(this);
    QIcon x(":/new/prefix1/krestik");
    QIcon o(":/new/prefix1/nolik");
    QIcon comp(":/new/prefix1/computer");
    but1->setIcon(x);
    but1->setFixedSize(100,100);
    but2->setIcon(o);
    but2->setFixedSize(100,100);
    butComputer->setIcon(comp);
    butComputer->setFixedSize(100,100);
    but1->setIconSize(QSize(50,50));
    but2->setIconSize(QSize(50,50));
    butComputer->setIconSize(QSize(50,50));

    but1->setStyleSheet("QPushButton:hover"
                        "{"
                        "border: 6px solid #828282;"
                        "border-radius: 5px;"
                        "background-color:#FBCEB1;"
                        "}");
    but2->setStyleSheet("QPushButton:hover"
                        "{"
                        "border: 6px solid #828282;"
                        "border-radius: 5px;"
                        "background-color:#FBCEB1;"
                        "}");
    butComputer->setStyleSheet("QPushButton:hover"
                        "{"
                        "border: 6px solid #828282;"
                        "border-radius: 5px;"
                        "background-color:#FBCEB1;"
                        "}");
    layout=new QHBoxLayout(this);
    layout->addWidget(but1);
    layout->addWidget(but2);
    layout->addWidget(butComputer);
    setModal(true);
    connect(but1,SIGNAL(clicked()),this,SLOT(ChangeX()));
    connect(but2,SIGNAL(clicked()),this,SLOT(ChangeO()));
}

DialogXo::~DialogXo(){}

void DialogXo::ChangeX()
{
    emit signalX();
    close();
}

void DialogXo::ChangeO()
{
    emit signalO();
    close();
}

void DialogXo::ChangeComputer()
{
    emit signalChanegeComputer();
    close();
}

