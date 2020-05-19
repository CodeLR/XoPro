#include "myplayer.h"

MyPlayer::MyPlayer()
{
    countStep=0;
}

void MyPlayer::setPixmapPlayer(const QString & str_pixmap)
{
    myPixmap.load(str_pixmap);
}

bool MyPlayer::getProgressPlayer() const
{
    return progressPlayer;
}

void MyPlayer::setProgressPlayer(bool _progress)
{
    progressPlayer=_progress;
}

QPixmap MyPlayer::getPixmap() const
{
    return myPixmap;
}

void MyPlayer::setCountStepWinner()
{
    ++countStep;
}

int MyPlayer::getCountStep() const
{
    return countStep;
}
