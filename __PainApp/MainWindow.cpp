#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
   _2d = new window2();
   _2d->show();

}

void MainWindow::on_pushButton_2_clicked()
{
 _3d = new Form();
 _3d->show();
}

void MainWindow::on_pushButton_3_clicked()
{
  edit = new text();
  edit->show();
}

void MainWindow::on_actionDark_triggered()
{
  ui->label->setStyleSheet("color: cyan");
  ui->pushButton->setStyleSheet("background-color: cyan");
  ui->pushButton_2->setStyleSheet("background-color: cyan");
  ui->pushButton_3->setStyleSheet("background-color: cyan");
  ui->background->setStyleSheet("background-color: rgba(0, 0, 0, 1)");

}

void MainWindow::on_actionLight_triggered()
{
    ui->label->setStyleSheet("color: black");
    ui->pushButton->setStyleSheet("background-color: rgba(246, 247, 245, 1)");
    ui->pushButton_2->setStyleSheet("background-color: rgba(246, 247, 245, 1)");
    ui->pushButton_3->setStyleSheet("background-color: rgba(246, 247, 245, 1)");
    ui->background->setStyleSheet("background-color: rgba(255, 255, 255, 1)");
}
