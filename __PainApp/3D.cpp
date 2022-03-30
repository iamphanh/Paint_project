#include "3D.h"
#include "ui_3D.h"
#include "ui__3qual_b.h"
#include "ui__3rec_b.h"
Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
}

Form::~Form()
{
    delete ui;
}

void Form::on_pushButton_clicked()
{
 if(ui->radioButton_2->isChecked()){
     _3qual = new _3qual_b(this);
     _3qual->resize(800,600);
     _3qual->setTitle("QUADRILATERAL");
     _3qual->show();
 }
 else if (ui->radioButton->isChecked()){
     _3rec = new _3rec_b (this);
     _3rec->resize(800,600);
     _3rec->setTitle("RECTANGULAR");
     _3rec->show();
 }
 else{
     QMessageBox:: information(this,"Error","Please choose an option!!");
 }
}

void Form::on_back_clicked()
{
    this->hide();
}
