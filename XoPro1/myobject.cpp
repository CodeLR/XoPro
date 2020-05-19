#include "myobject.h"

MyObject::MyObject(QWidget* parent):QWidget(parent)
{
    label=new QLabel();
    processLabel=false;
    processO=false;
    processX=false;
}

bool MyObject::isProcess()const
{
    return processLabel;
}

void MyObject::setProcess(bool _my_process)
{
    processLabel=_my_process;
}

QLabel* MyObject::getLabel()
{
    return label;
}


