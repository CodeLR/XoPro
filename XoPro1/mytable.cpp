#include "mytable.h"
#include <QHeaderView>
#include <QPoint>
#include <QTableWidgetItem>
#include <QMouseEvent>
#include <QtWidgets>
#include <QImage>
#include <QPixmap>

MyTable::MyTable(QWidget * parent):
    QTableWidget(parent)
{
    setEnabled(false);
    gameType=-1;
    endGame=false;
    addTable();
    player1=new MyPlayer();
    player2=new MyPlayer();
    dialog=new DialogXo(this);
}

MyTable::~MyTable()
{

}

void MyTable::addTable()
{
    this->clear();
    this->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    this->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    this->setSelectionMode(QAbstractItemView::NoSelection);
    this->setEditTriggers(QAbstractItemView::NoEditTriggers);
    this->setFocusPolicy(Qt::NoFocus);
    this->setColumnCount(3);
    this->setRowCount(3);
        for(int i=0;i<rowCount();++i){
            for(int j=0;j<columnCount();++j){
                QTableWidgetItem * item=new QTableWidgetItem();
                item->setFlags(item->flags() ^ Qt::ItemIsEnabled);
                this->setItem(i,j,item);
                this->setColumnWidth(j,100);
                this->setRowHeight(i,100);
            }
        }

        this->horizontalHeader()->hide();
        this->verticalHeader()->hide();
        masLabel[0][0]=new MyObject(this);
        masLabel[0][1]=new MyObject(this);
        masLabel[0][2]=new MyObject(this);
        masLabel[1][0]=new MyObject(this);
        masLabel[1][1]=new MyObject(this);
        masLabel[1][2]=new MyObject(this);
        masLabel[2][0]=new MyObject(this);
        masLabel[2][1]=new MyObject(this);
        masLabel[2][2]=new MyObject(this);
        for(int i=0;i<rowCount();++i){
            for(int j=0;j<columnCount();++j){
                setCellWidget(i,j,masLabel[i][j]->getLabel());
            }
        }

}

void MyTable::LogicWinnerGame()
{
    // O gorizontal
    if((masLabel[0][0]->processO==true) && (masLabel[0][1]->processO==true) && (masLabel[0][2]->processO==true)){
        if(gameType==1){
            msgBox.setText("PLAYER 2 WINNER !!!!");
            player2->setCountStepWinner();
            player2->setProgressPlayer(true);
            player1->setProgressPlayer(false);
            msgBox.exec();
            endGame=true;
            StartGameFunction();
        }else{
            msgBox.setText("PLAYER 1 WINNER !!!!");
            player1->setCountStepWinner();
            player1->setProgressPlayer(true);
            msgBox.exec();
            endGame=true;
            StartGameFunction();
        }
    }
    else if((masLabel[1][0]->processO==true) && (masLabel[1][1]->processO==true) && (masLabel[1][2]->processO==true)){
        if(gameType==1){
            msgBox.setText("PLAYER 2 WINNER !!!!");
            player2->setCountStepWinner();
            player2->setProgressPlayer(true);
            player1->setProgressPlayer(false);
            msgBox.exec();
            endGame=true;
            StartGameFunction();
        }else{
            msgBox.setText("PLAYER 1 WINNER !!!!");
            player1->setCountStepWinner();
            player1->setProgressPlayer(true);

            msgBox.exec();
            endGame=true;
            StartGameFunction();
        }
    }
    else if((masLabel[2][0]->processO==true) && (masLabel[2][1]->processO==true) && (masLabel[2][2]->processO==true)){
        if(gameType==1){
            msgBox.setText("PLAYER 2 WINNER !!!!");
            player2->setCountStepWinner();
            player2->setProgressPlayer(true);
            player1->setProgressPlayer(false);
            msgBox.exec();
            endGame=true;
            StartGameFunction();
        }else{
            msgBox.setText("PLAYER 1 WINNER !!!!");
            player1->setCountStepWinner();
            player1->setProgressPlayer(true);
            msgBox.exec();
            endGame=true;
            StartGameFunction();
        }
    }
    //naiskas
    else if((masLabel[0][0]->processO==true) && (masLabel[1][1]->processO==true) && (masLabel[2][2]->processO==true)){
        if(gameType==1){
            msgBox.setText("PLAYER 2 WINNER !!!!");
            player2->setCountStepWinner();
            player2->setProgressPlayer(true);
            player1->setProgressPlayer(false);
            msgBox.exec();
            endGame=true;
            StartGameFunction();
        }else{
            msgBox.setText("PLAYER 1 WINNER !!!!");
            player1->setCountStepWinner();
            player1->setProgressPlayer(true);
            msgBox.exec();
            endGame=true;
            StartGameFunction();
        }
    }
    else if((masLabel[0][2]->processO==true) && (masLabel[1][1]->processO==true) && (masLabel[2][0]->processO==true)){
        if(gameType==1){
            msgBox.setText("PLAYER 2 WINNER !!!!");
            player2->setCountStepWinner();
            player2->setProgressPlayer(true);
            player1->setProgressPlayer(false);
            msgBox.exec();
            endGame=true;
            StartGameFunction();
        }else{
            msgBox.setText("PLAYER 1 WINNER !!!!");
            player1->setCountStepWinner();
            player1->setProgressPlayer(true);
            msgBox.exec();
            endGame=true;
            StartGameFunction();
        }
    }

    //vertikal
    else if((masLabel[0][0]->processO==true) && (masLabel[1][0]->processO==true) && (masLabel[2][0]->processO==true)){
        if(gameType==1){
            msgBox.setText("PLAYER 2 WINNER !!!!");
            player2->setCountStepWinner();
            player2->setProgressPlayer(true);
            player1->setProgressPlayer(false);
            msgBox.exec();
            endGame=true;
            StartGameFunction();
        }else{
            msgBox.setText("PLAYER 1 WINNER !!!!");
            player1->setCountStepWinner();
            player1->setProgressPlayer(true);
            msgBox.exec();
            endGame=true;
            StartGameFunction();
        }
    }
    else if((masLabel[0][1]->processO==true) && (masLabel[1][1]->processO==true) && (masLabel[2][1]->processO==true)){
        if(gameType==1){
            msgBox.setText("PLAYER 2 WINNER !!!!");
            player2->setCountStepWinner();
            player2->setProgressPlayer(true);
            player1->setProgressPlayer(false);
            msgBox.exec();
            endGame=true;
            StartGameFunction();
        }else{
            msgBox.setText("PLAYER 1 WINNER !!!!");
            player1->setCountStepWinner();
            player1->setProgressPlayer(true);
            msgBox.exec();
            endGame=true;
            StartGameFunction();
        }
    }
    else if((masLabel[0][2]->processO==true) && (masLabel[1][2]->processO==true) && (masLabel[2][2]->processO==true)){
        if(gameType==1){
            msgBox.setText("PLAYER 2 WINNER !!!!");
            player2->setCountStepWinner();
            player2->setProgressPlayer(true);
            player1->setProgressPlayer(false);
            msgBox.exec();
            endGame=true;
            StartGameFunction();
        }else{
            msgBox.setText("PLAYER 1 WINNER !!!!");
            player1->setCountStepWinner();
            player1->setProgressPlayer(true);
            msgBox.exec();
            endGame=true;
            StartGameFunction();
        }
    }

//X
    if((masLabel[0][0]->processX==true) && (masLabel[0][1]->processX==true) && (masLabel[0][2]->processX==true)){
        if(gameType==1){
            msgBox.setText("PLAYER 1 WINNER !!!!");
            player1->setCountStepWinner();
            player1->setProgressPlayer(true);
            msgBox.exec();
            endGame=true;
            StartGameFunction();
        }else{
            msgBox.setText("PLAYER 2 WINNER !!!!");
            player2->setCountStepWinner();
            msgBox.exec();
            player2->setProgressPlayer(true);
            player1->setProgressPlayer(false);
            endGame=true;
            StartGameFunction();
        }
    }
    else if((masLabel[1][0]->processX==true) && (masLabel[1][1]->processX==true) && (masLabel[1][2]->processX==true)){
        if(gameType==1){
            msgBox.setText("PLAYER 1 WINNER !!!!");
            player1->setCountStepWinner();
            player1->setProgressPlayer(true);
            msgBox.exec();
            endGame=true;
            StartGameFunction();
        }else{
            msgBox.setText("PLAYER 2 WINNER !!!!");
            player2->setCountStepWinner();
            player2->setProgressPlayer(true);
            player1->setProgressPlayer(false);
            msgBox.exec();
            endGame=true;
            StartGameFunction();
        }

    }
    else if((masLabel[2][0]->processX==true) && (masLabel[2][1]->processX==true) && (masLabel[2][2]->processX==true)){
        if(gameType==1){
            msgBox.setText("PLAYER 1 WINNER !!!!");
            player1->setCountStepWinner();
            player1->setProgressPlayer(true);
            msgBox.exec();
            endGame=true;
            StartGameFunction();
        }else{
            msgBox.setText("PLAYER 2 WINNER !!!!");
            player2->setCountStepWinner();
            msgBox.exec();
            player2->setProgressPlayer(true);
            player1->setProgressPlayer(false);
            endGame=true;
            StartGameFunction();
        }
    }
    //naiskas
    else if((masLabel[0][0]->processX==true) && (masLabel[1][1]->processX==true) && (masLabel[2][2]->processX==true)){
        if(gameType==1){
            msgBox.setText("PLAYER 1 WINNER !!!!");
            player1->setCountStepWinner();
            player1->setProgressPlayer(true);
            msgBox.exec();
            endGame=true;
            StartGameFunction();
        }else{
            msgBox.setText("PLAYER 2 WINNER !!!!");
            player2->setCountStepWinner();
            msgBox.exec();
            player2->setProgressPlayer(true);
            player1->setProgressPlayer(false);
            endGame=true;
            StartGameFunction();
        }
    }
    else if((masLabel[0][2]->processX==true) && (masLabel[1][1]->processX==true) && (masLabel[2][0]->processX==true)){
        if(gameType==1){
            msgBox.setText("PLAYER 1 WINNER !!!!");
            player1->setCountStepWinner();
            player1->setProgressPlayer(true);
            msgBox.exec();
            endGame=true;
            StartGameFunction();
        }else{
            msgBox.setText("PLAYER 2 WINNER !!!!");
            player2->setCountStepWinner();
            msgBox.exec();
            player2->setProgressPlayer(true);
            player1->setProgressPlayer(false);
            endGame=true;
            StartGameFunction();
        }
    }

    //vertikal
    else if((masLabel[0][0]->processX==true) && (masLabel[1][0]->processX==true) && (masLabel[2][0]->processX==true)){
        if(gameType==1){
            msgBox.setText("PLAYER 1 WINNER !!!!");
            player1->setCountStepWinner();
            player1->setProgressPlayer(true);
            msgBox.exec();
            endGame=true;
            StartGameFunction();
        }else{
            msgBox.setText("PLAYER 2 WINNER !!!!");
            player2->setCountStepWinner();
            msgBox.exec();
            endGame=true;
            player2->setProgressPlayer(true);
            player1->setProgressPlayer(false);
            StartGameFunction();
        }
    }
    else if((masLabel[0][1]->processX==true) && (masLabel[1][1]->processX==true) && (masLabel[2][1]->processX==true)){
        if(gameType==1){
            msgBox.setText("PLAYER 1 WINNER !!!!");
            player1->setCountStepWinner();
            player1->setProgressPlayer(true);
            msgBox.exec();
            endGame=true;
            StartGameFunction();
        }else{
            msgBox.setText("PLAYER 2 WINNER !!!!");
            player2->setCountStepWinner();
            msgBox.exec();
            player2->setProgressPlayer(true);
            player1->setProgressPlayer(false);
            endGame=true;
            StartGameFunction();
        }
    }
    else if((masLabel[0][2]->processX==true) && (masLabel[1][2]->processX==true) && (masLabel[2][2]->processX==true)){
        if(gameType==1){
            msgBox.setText("PLAYER 1 WINNER !!!!");
            player1->setCountStepWinner();
            player1->setProgressPlayer(true);
            msgBox.exec();
            endGame=true;
            StartGameFunction();
        }else{
            msgBox.setText("PLAYER 2 WINNER !!!!");
            player2->setCountStepWinner();
            msgBox.exec();
            player2->setProgressPlayer(true);
            player1->setProgressPlayer(false);
            endGame=true;
            StartGameFunction();
        }
    }

}

void MyTable::StartGameFunction()
{
    actionCounterSizeTable=0;
    emit summaScore(player1->getCountStep(),player2->getCountStep());
    qDebug()<<"START";
    setEnabled(true);
    if(endGame==true){
        for(int i=0;i<rowCount();++i){
            for(int j=0;j<columnCount();++j){
                this->removeCellWidget(i,j);
            }
        }
        for(int i=0;i<3;++i){
            for(int j=0;j<3;++j){
               delete masLabel[i][j];
            }
        }
        //delete  masLabel;
    }
    addTable();
}

void MyTable::mousePressEvent(QMouseEvent *event)
{
    QTableWidgetItem*table=new QTableWidgetItem;
    table=this->itemAt(event->pos());
    QPoint point;
    point=QPoint(table->row(),table->column());

        if(player1->getProgressPlayer()==true){ // Выясняем первый игрок
            if(table->row()==point.x() && table->column()==point.y()){// точка на таблице
                if(!masLabel[table->row()][table->column()]->isProcess()){ //если пестой то заходим
                    qDebug()<<"GO P1";
                    //установка картинки в ячейку
                    masLabel[table->row()][table->column()]->getLabel()->setPixmap(player1->getPixmap().scaled(QSize(100,101), Qt::IgnoreAspectRatio,Qt::SmoothTransformation));
                    masLabel[table->row()][table->column()]->setProcess(true);// уставливаем чек на ячейку
                    ++actionCounterSizeTable;

                    if(gameType==1){
                        masLabel[table->row()][table->column()]->processX=true;
                        masLabel[table->row()][table->column()]->processO=false;
                    }
                    else{
                        masLabel[table->row()][table->column()]->processX=false;
                        masLabel[table->row()][table->column()]->processO=true;
                    }
                    player1->setProgressPlayer(false);
                    player2->setProgressPlayer(true);
                }
            }
        }

        else if(player1->getProgressPlayer()==false){
            if((table->row()==point.x()) && (table->column()==point.y())){
                if(!masLabel[table->row()][table->column()]->isProcess()){
                    masLabel[table->row()][table->column()]->getLabel()->setPixmap(player2->getPixmap().scaled(QSize(100,101), Qt::IgnoreAspectRatio,Qt::SmoothTransformation));
                    masLabel[table->row()][table->column()]->setProcess(true);
                    ++actionCounterSizeTable;
                    if(gameType==2){
                        masLabel[table->row()][table->column()]->processO=false;
                        masLabel[table->row()][table->column()]->processX=true;
                    }
                    else{
                        masLabel[table->row()][table->column()]->processO=true;
                        masLabel[table->row()][table->column()]->processX=false;
                    }
                    player2->setProgressPlayer(false);
                    player1->setProgressPlayer(true);
                    qDebug()<<"GO P2";
                }
            }
        }


        LogicWinnerGame();

        if(actionCounterSizeTable==9){
            if(player1->getProgressPlayer()==true){
                player1->setProgressPlayer(false);
            }else if(player2->getProgressPlayer()==true){
                player2->setProgressPlayer(false);
            }
            msgBox.setText("DRAW !!!!");
            msgBox.exec();
            endGame=true;
            StartGameFunction();
        }

}

void MyTable::StartGameSlot()//START GAME BUTTON
{
    actionCounterSizeTable=0;
    qDebug()<<"START";
    setEnabled(true);
    if(player1->getCountStep()==0 && player2->getCountStep()==0){
        connect(dialog,SIGNAL(signalX()),this,SLOT(SaveXPlayer()));
        connect(dialog,SIGNAL(signalO()),this,SLOT(SaveOPlayer()));
        dialog->exec();
    }
    if(endGame==true){
        for(int i=0;i<rowCount();++i){
            for(int j=0;j<columnCount();++j){
                this->removeCellWidget(i,j);
            }
        }
        for(int i=0;i<3;++i){
            for(int j=0;j<3;++j){
               delete masLabel[i][j];
            }
        }
        //delete  masLabel;
    }

    addTable();
//    if(player1->getCountStep()>player2->getCountStep()){

//    }
}

void MyTable::SaveXPlayer()
{
    qDebug()<<"SaveXPlayer";
    gameType=1;
    player1->setPixmapPlayer(":/new/prefix1/krestik");
    player1->setProgressPlayer(true);
    player2->setPixmapPlayer(":/new/prefix1/nolik");
    player2->setProgressPlayer(false);
}

void MyTable::SaveOPlayer()
{
    qDebug()<<"SaveOPlayer";
    gameType=2;

    player1->setPixmapPlayer(":/new/prefix1/nolik");
    player1->setProgressPlayer(true);
    player2->setPixmapPlayer(":/new/prefix1/krestik");
    player2->setProgressPlayer(false);
}



//gametype = 3 vs comp;


