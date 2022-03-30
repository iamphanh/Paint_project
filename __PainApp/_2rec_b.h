#ifndef _2REC_B_H
#define _2REC_B_H

#include <QMainWindow>
#include<QOpenGLWindow>
#include <QOpenGLFunctions>
#include <QPainter>
#include<QWindow>
namespace Ui {
class _2rec_b;
}

class _2rec_b : public QMainWindow
{
    Q_OBJECT

public:
    explicit _2rec_b(QWidget *parent = nullptr);
    ~_2rec_b();
protected:
    void paintEvent(QPaintEvent *even);
private:
    Ui::_2rec_b *ui;
};

#endif // _2REC_B_H
