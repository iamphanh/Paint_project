#include "_2rec_n.h"
#include "ui__2rec_n.h"

_2rec_n::_2rec_n(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::_2rec_n)
{
    ui->setupUi(this);
}

_2rec_n::~_2rec_n()
{
    delete ui;
}

void _2rec_n::paintEvent(QPaintEvent *even)
{
    QPainter painter1(this);
    painter1.setPen(Qt::red);                  //ve hinh chu nhat
    painter1.drawRect(QRect(180,100,400,400));
}
