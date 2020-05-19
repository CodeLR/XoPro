#ifndef MYPLAYER_H
#define MYPLAYER_H

#include <QPixmap>
#include <QString>

class MyPlayer
{
private:
    bool progressPlayer;
    int countStep;
    QPixmap myPixmap;
public:
    MyPlayer();
    ~MyPlayer(){}
    void setPixmapPlayer(const QString&);
    bool getProgressPlayer()const;
    void setProgressPlayer(bool _progress);
    QPixmap getPixmap()const;
    void setCountStepWinner();
    int getCountStep()const;
};

#endif // MYPLAYER_H
