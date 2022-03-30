#include "_2cir_b.h"
#include "ui__2cir_b.h"

_2cir_b::_2cir_b(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::_2cir_b)
{
    ui->setupUi(this);
}

_2cir_b::~_2cir_b()
{
    delete ui;
}

void _2cir_b::paintEvent(QPaintEvent *even)
{
    QRectF rectangle(180,100,400,400);
    QPainter painter2(this);
    painter2.setBrush(Qt::cyan);
    painter2.setPen(Qt::cyan);  // ve hinh tron
    painter2.drawEllipse(rectangle);
}
