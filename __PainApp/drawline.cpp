#include "drawline.h"
#include "ui_drawline.h"

drawline::drawline(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::drawline)
{
    ui->setupUi(this);
}

drawline::~drawline()
{
    delete ui;
}
