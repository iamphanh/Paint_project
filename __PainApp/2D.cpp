#include "2D.h"
#include "ui_2D.h"
#include"ui__2cir_b.h"
#include"ui__2cir_n.h"
#include"ui__2rec_b.h"
#include"ui__2rec_n.h"

window2::window2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::window2)
{
    ui->setupUi(this);
}

window2::~window2()
{
    delete ui;
}

void window2::on_pushButton_clicked()
{
  if(ui->rec->isChecked()&& ui->comboBox->currentIndex() == 0){
      _2recb = new _2rec_b(this);
      _2recb->show();
  }
  else if(ui->rec->isChecked()&& ui->comboBox->currentIndex() == 1){
      _2recn = new _2rec_n(this);
      _2recn->show();
  }
  else if(ui->cir->isChecked()&& ui->comboBox->currentIndex() == 0){
      _2cirb = new _2cir_b(this);
      _2cirb->show();
  }
  else if (ui->cir->isChecked()&& ui->comboBox->currentIndex() == 1){
      _2cirn = new _2cir_n(this);
      _2cirn->show();
  }
  else {
      QMessageBox:: information(this,"Error","Please choose an option!!");
  }
}


void window2::on_back_clicked()
{
 this->hide();
}
