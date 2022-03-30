#include "_2rec_b.h"
#include "ui__2rec_b.h"

_2rec_b::_2rec_b(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::_2rec_b)
{
    ui->setupUi(this);
}

_2rec_b::~_2rec_b()
{
    delete ui;
}

void _2rec_b::paintEvent(QPaintEvent *even)
{
    QPainter painter(this);
    painter.setBrush(Qt::green);
    painter.setPen(Qt::green);
    painter.drawRect(QRect(180,100,400,400));    // ve hinh chua nhat dc to mau

}
