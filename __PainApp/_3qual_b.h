#ifndef _3QUAL_B_H
#define _3QUAL_B_H

#include<QMainWindow>
#include<QOpenGLWindow>
#include<QPainter>
#include<QSurfaceFormat>
#include<QOpenGLFunctions>
#include<QtOpenGL>
#include<GL/glu.h>
#include<QTime>

QT_BEGIN_NAMESPACE
namespace Ui { class _3qual_b; }
QT_END_NAMESPACE

class _3qual_b : public QOpenGLWindow
{
    Q_OBJECT

public:
    _3qual_b(QWidget *parent = 0);
    ~_3qual_b();

protected:
    virtual void initializeGL();
    virtual void resizeGL(int w, int h);
    virtual void paintGL();
    void resizeEven(QResizeEvent *even);
    void paintEven(QPaintEvent *even);

public slots:
    void UpdateAnimation();

private:

     Ui::_3qual_b *ui;
    float x;
};
#endif // MAINWINDOW_H
