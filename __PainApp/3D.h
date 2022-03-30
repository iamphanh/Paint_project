#ifndef FORM_H
#define FORM_H
#include<_3qual_b.h>
#include<_3rec_b.h>
#include <QWidget>

namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = nullptr);
    ~Form();

private slots:
    void on_pushButton_clicked();

    void on_back_clicked();

private:
    Ui::Form *ui;
    _3qual_b *_3qual;
    _3rec_b *_3rec;

};

#endif // FORM_H
