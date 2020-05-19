#ifndef MYTABLE_H
#define MYTABLE_H
#include <QTableWidget>
#include <QDebug>
#include <QPushButton>
#include <QLabel>
#include <QVector>
#include <QMessageBox>
#include "myplayer.h"
#include "myobject.h"
#include "dialogxo.h"
class MyTable:public QTableWidget
{
    Q_OBJECT
private:
    MyPlayer * player1;
    MyPlayer * player2;
    QMessageBox msgBox;
    DialogXo * dialog;
    QPoint m_dropStart=QPoint(-1,-1);
    MyObject* masLabel[3][3];
    int gameType;
    bool endGame;
    int actionCounterSizeTable;

public:
        explicit MyTable(QWidget * parent=nullptr);
        ~MyTable()override;
        void addTable();
        void LogicWinnerGame();
        void StartGameFunction();
protected:
        void mousePressEvent(QMouseEvent* event)override;

public slots:
        void StartGameSlot();
        void SaveXPlayer();
        void SaveOPlayer();
signals:
        void clearLabel();
        void summaScore(int,int);
};

#endif // MYTABLE_H
