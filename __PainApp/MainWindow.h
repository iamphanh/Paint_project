#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QColor>
#include<QLabel>
#include <QMainWindow>
#include<2D.h>
#include<3D.h>
#include<text.h>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_actionDark_triggered();

    void on_actionLight_triggered();

private:
    Ui::MainWindow *ui;
    window2 *_2d;
    text *edit;
    Form *_3d;
};

#endif // MAINWINDOW_H
