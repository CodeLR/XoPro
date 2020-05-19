#ifndef MYOBJECT_H
#define MYOBJECT_H

#include <QLabel>
#include <QWidget>
class MyObject:public QWidget
{
    Q_OBJECT
private:
    QLabel* label;
    bool processLabel;

public:
    MyObject(QWidget* parent);
    ~MyObject(){}
    bool isProcess()const;
    void setProcess(bool);
    QLabel* getLabel();
    bool processX;
    bool processO;


};

#endif // MYOBJECT_H
