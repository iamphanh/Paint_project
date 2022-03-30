#include "_3qual_b.h"
#include "ui__3qual_b.h"

_3qual_b::_3qual_b(QWidget *parent)
{
   QTimer *timer = new QTimer(this);
   connect(timer, SIGNAL(timeout()),this, SLOT(UpdateAnimation()));
   timer->start(150);
   x = 0;
}

_3qual_b::~_3qual_b()
{
    delete ui;
}

void _3qual_b::initializeGL()
{
    glEnable(GL_DEPTH_TEST);
    resizeGL(this->width(), this-> height());

}

void _3qual_b::resizeGL(int w, int h)
{

    glViewport(1,1,w,h);
    qreal v = qreal(w)/qreal(h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(120,v,0.5,40);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glFlush ();
}

void _3qual_b::paintGL()
{

  glEnable(GL_LIGHT1);
  glClear(GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT);
  glClearColor(0.4f,0.5f,0.7f,1.f);
  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();

  glTranslatef(0.0,0.0,-3.0);
  glRotatef(x,3.0,2.0,1.0);

  // ve hinh tam giac
  glBegin(GL_TRIANGLES);

        glVertex3f(-1.5, -1.5, 1.5);
        glColor3f(1.0f,0.5f,0.5f);
        glVertex3f(1.5, 1.5, 1.5);
        glColor3f(0.5f,1.0f,0.4f);
        glVertex3f(-1.5, 1.5, -1.5);
        glColor3f(0.35f,0.67f,1.0f);
  glEnd();

    glBegin(GL_TRIANGLES);
        glVertex3f(1.5, 1.5, 1.5);
        glColor3f(1.0f,0.0f,0.0f);
        glVertex3f(-1.5, 1.5, 1.5);
        glColor3f(0.0f,1.0f,0.0f);
        glVertex3f(-1.5, -1.5, 1.5);
        glColor3f(0.0f,0.0f,1.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
          glVertex3f(1.5, 1.5, 1.5);
          glColor3f(1.0f,0.0f,0.0f);
          glVertex3f(-1.5, 1.5, 1.5);
          glColor3f(0.0f,0.0f,1.0f);
          glVertex3f(-1.5, 1.5, -1.5);
          glColor3f(0.5f,0.5f,0.1f);
    glEnd();

  glFlush();

}


void _3qual_b::paintEven(QPaintEvent *even)
{

  paintGL();
}
void _3qual_b::UpdateAnimation(){
    x +=10;
    this->update();
}

