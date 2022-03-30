#include "_3rec_b.h"
#include "ui__3rec_b.h"

_3rec_b::_3rec_b(QWidget *parent)
{

   QTimer *timer = new QTimer(this);
   connect(timer, SIGNAL(timeout()),this, SLOT(UpdateAnimation()));
   timer->start(150);
   x = 0;
}

_3rec_b::~_3rec_b()
{
    delete ui;
}

void _3rec_b::initializeGL()
{
    glEnable(GL_DEPTH_TEST);
    resizeGL(this->width(), this-> height());

}

void _3rec_b::resizeGL(int w, int h)
{

    glViewport(0,0,w,h);
    qreal v = qreal(w)/qreal(h);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(50,v,0.5,40);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

       glFlush ();
}

void _3rec_b::paintGL()
{

  glEnable(GL_LIGHT1);
  glClear(GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT);
  glClearColor(0.4f,0.5f,0.7f,1.f);
  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();

  glTranslatef(0.0,0.0,-3.0);
  glRotatef(x,3.0,2.0,1.0);

   // ve hinh hop chu nhat
  glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 0.0);
        glVertex3f(0.3, -0.4, -0.3);
        glVertex3f(0.3, 0.4, -0.3);
        glVertex3f(-0.3, 0.4, -0.3);
        glVertex3f(-0.3, -0.4, -0.3);
    glEnd();


      glBegin(GL_POLYGON);
          glColor3f(0.0, 1.0, 0.0);
          glVertex3f(0.3, -0.4, 0.3);
          glVertex3f(0.3, 0.4, 0.3);
          glVertex3f(-0.3, 0.4, 0.3);
          glVertex3f(-0.3, -0.4, 0.3);
      glEnd();


      glBegin(GL_POLYGON);
          glColor3f(1.0, 0.0, 1.0);
          glVertex3f(0.3, -0.4, -0.3);
          glVertex3f(0.3, 0.4, -0.3);
          glVertex3f(0.3, 0.4, 0.3);
          glVertex3f(0.3, -0.4, 0.3);
      glEnd();

    glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 0.0);
        glVertex3f(-0.3, 0.4, 0.3);
        glVertex3f(-0.3, 0.4, -0.3);
        glVertex3f(-0.3, -0.4, -0.3);
        glVertex3f(-0.3, -0.4, 0.3);
    glEnd();


    glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 1.0);
        glVertex3f(0.3, 0.4, 0.3);
        glVertex3f(0.3, 0.4, -0.3);
        glVertex3f(-0.3, 0.4, -0.3);
        glVertex3f(-0.3, 0.4, 0.3);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(1.0, 0.0, 0.0);
        glVertex3f(0.3, -0.4, -0.3);
        glVertex3f(0.3, -0.4, 0.3);
        glVertex3f(-0.3, -0.4, 0.3);
        glVertex3f(-0.3, -0.4, -0.3);
    glEnd();


  glFlush();

}

void _3rec_b::resizeEven(QResizeEvent *even)
{
      resizeGL(this->width(),this->height());
      this->update();
}

void _3rec_b::paintEven(QPaintEvent *even)
{
  paintGL();
}
void _3rec_b::UpdateAnimation(){
    x +=10;
    this->update();
}




