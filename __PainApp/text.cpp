#include "text.h"
#include "ui_text.h"

text::text(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::text)
{

    ui->setupUi(this);

}

text::~text()
{
    delete ui;
}

void text::on_pushButton_clicked()
{
    ui->edit->setFont(ui->fontComboBox->currentFont());
    ui->edit->setText(ui->lineEdit->text());

}

void text::on_actionDark_triggered()
{
    ui->lineEdit->setStyleSheet("background-color: rgba(255, 216, 255, 1)");
    ui->edit->setStyleSheet("background-color:rgba(255, 216, 255, 1)");
    ui->pushButton->setStyleSheet("background-color: rgba(255, 216, 255, 1)");
    ui->fontComboBox->setStyleSheet("background-color: rgba(255, 216, 255, 1)");
    ui->title->setStyleSheet("color:rgba(255, 0, 255, 1)");
}

void text::on_actionLight_triggered()
{
    ui->lineEdit->setStyleSheet("background-color: rgba(246, 247, 245, 1)");
    ui->edit->setStyleSheet("background-color: rgba(246, 247, 245, 1)");
    ui->pushButton->setStyleSheet("background-color: rgba(246, 247, 245, 1");
    ui->fontComboBox->setStyleSheet("background-color: rgba(246, 247, 245, 1");
    ui->title->setStyleSheet("color:black");
}

void text::on_back_clicked()
{
    this->hide();
}
