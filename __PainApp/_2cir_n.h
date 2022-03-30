#ifndef _2CIR_N_H
#define _2CIR_N_H

#include <QMainWindow>
#include<QOpenGLWindow>
#include <QOpenGLFunctions>
#include <QPainter>
#include<QWindow>
#include <QPaintEvent>
namespace Ui {
class _2cir_n;
}

class _2cir_n : public QMainWindow
{
    Q_OBJECT

public:
    explicit _2cir_n(QWidget *parent = nullptr);
    ~_2cir_n();
protected:
    void paintEvent(QPaintEvent *even);
private:
    Ui::_2cir_n *ui;
};

#endif // _2CIR_N_H
