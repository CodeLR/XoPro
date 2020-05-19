#ifndef MYFRAME_H
#define MYFRAME_H

#include <QFrame>
#include <QVBoxLayout>
#include <QGridLayout>
#include <QLabel>
class MyFrame:public QFrame
{
private:
    QVBoxLayout * layout;
    QGridLayout * Hlayout;
public:
    MyFrame(QWidget * parent);
    ~MyFrame(){}
    void addWidget(QWidget*,QWidget*,QWidget*,QWidget*);
};

#endif // MYFRAME_H
