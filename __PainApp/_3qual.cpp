#include "_3qual.h"
#include "ui__3qual.h"

_3qual::_3qual(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::_3qual)
{
    ui->setupUi(this);
}

_3qual::~_3qual()
{
    delete ui;
}
