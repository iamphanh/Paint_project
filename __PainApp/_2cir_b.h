#ifndef _2CIR_B_H
#define _2CIR_B_H

#include <QMainWindow>
#include<QOpenGLWindow>
#include <QOpenGLFunctions>
#include <QPainter>
#include<QWindow>
namespace Ui {
class _2cir_b;
}

class _2cir_b : public QMainWindow
{
    Q_OBJECT

public:
    explicit _2cir_b(QWidget *parent = nullptr);
    ~_2cir_b();
protected:
    void paintEvent(QPaintEvent *even);
private:
    Ui::_2cir_b *ui;
};


#endif // _2CIR_B_H
