#ifndef _2REC_N_H
#define _2REC_N_H

#include <QMainWindow>
#include<QOpenGLWindow>
#include <QOpenGLFunctions>
#include <QPainter>
#include<QWindow>
namespace Ui {
class _2rec_n;
}

class _2rec_n : public QMainWindow
{
    Q_OBJECT

public:
     _2rec_n(QWidget *parent = nullptr);
    ~_2rec_n();
protected:
    void paintEvent(QPaintEvent *even);
private:
    Ui::_2rec_n *ui;
};

#endif // _2REC_N_H
