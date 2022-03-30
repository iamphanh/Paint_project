#ifndef TEXT_H
#define TEXT_H

#include <QMainWindow>

namespace Ui {
class text;
}

class text : public QMainWindow
{
    Q_OBJECT

public:
    explicit text(QWidget *parent = 0);
    ~text();

private slots:
    void on_pushButton_clicked();

    void on_actionDark_triggered();

    void on_actionLight_triggered();

    void on_back_clicked();

private:
    Ui::text *ui;
};

#endif // TEXT_H
