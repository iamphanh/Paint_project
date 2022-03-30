#include "_2cir_n.h"
#include "ui__2cir_n.h"

_2cir_n::_2cir_n(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::_2cir_n)
{
    ui->setupUi(this);
}

_2cir_n::~_2cir_n()
{
    delete ui;
}
void _2cir_n::paintEvent(QPaintEvent *even)
{
    QRectF rectangle(180,100,400,400);
    QPainter painter2(this);
    painter2.setPen(Qt::BlankCursor);  // ve duong tron
    painter2.drawEllipse(rectangle);
}
