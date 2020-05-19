#include "myframe.h"
#include <QFont>
MyFrame::MyFrame(QWidget * parent):QFrame (parent)
{

}

void MyFrame::addWidget(QWidget * _table, QWidget *_but,QWidget* _label,QWidget*_label1)
{
    layout=new QVBoxLayout(this);
    Hlayout=new QGridLayout(this);
    QLabel *label=new QLabel(this);
    QFont font;
    font.setWeight(100);
    font.setPixelSize(15);
    label->setFont(font);
    label->setText("SCORE");
    Hlayout->addWidget(_label,0,0);
    Hlayout->addWidget(_label1,0,4,Qt::AlignRight);
    Hlayout->addWidget(label,0,2,Qt::AlignCenter);
    layout->addWidget(_but);
    layout->addWidget(_table);
    layout->addLayout(Hlayout);
}
