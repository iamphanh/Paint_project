#ifndef DRAWLINE_H
#define DRAWLINE_H

#include <QMainWindow>

namespace Ui {
class drawline;
}

class drawline : public QMainWindow
{
    Q_OBJECT

public:
    explicit drawline(QWidget *parent = nullptr);
    ~drawline();

private:
    Ui::drawline *ui;
};

#endif // DRAWLINE_H
