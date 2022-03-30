#include "_3rect.h"
#include "ui__3rect.h"

_3rect::_3rect(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::_3rect)
{
    ui->setupUi(this);
}

_3rect::~_3rect()
{
    delete ui;
}
