#ifndef WINDOW2_H
#define WINDOW2_H

#include <QWidget>
#include<_2cir_b.h>
#include<_2cir_n.h>
#include<_2rec_b.h>
#include<_2rec_n.h>
#include <QMainWindow>
#include <QMessageBox>
namespace Ui {
class window2;
}

class window2 : public QWidget
{
    Q_OBJECT

public:
    explicit window2(QWidget *parent = nullptr);
    ~window2();

private slots:
    void on_pushButton_clicked();

    void on_back_clicked();

private:
    Ui::window2 *ui;
    _2cir_b *_2cirb;
    _2cir_n *_2cirn;
    _2rec_n *_2recn;
    _2rec_b *_2recb;

};

#endif // WINDOW2_H
