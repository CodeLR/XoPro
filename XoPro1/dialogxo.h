#ifndef DIALOGXO_H
#define DIALOGXO_H

#include <QDialog>
#include <QPushButton>
#include <QHBoxLayout>
#include <QPalette>
#include <QObject>




class DialogXo : public QDialog
{
    Q_OBJECT
private:

    QHBoxLayout * layout;
    QPalette* pallete_1;
    QPalette* pallete_2;
public:
    DialogXo(QWidget * parent);
    ~DialogXo();
public slots:
    void ChangeX();
    void ChangeO();
    void ChangeComputer();
signals:
    void signalX();
    void signalO();
    void signalChanegeComputer();
protected:
    QPushButton * but1;
    QPushButton * but2;
    QPushButton * butComputer;
};

#endif // DIALOGXO_H
