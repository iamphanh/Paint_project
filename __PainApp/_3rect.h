#ifndef _3RECT_H
#define _3RECT_H

#include <QWidget>

namespace Ui {
class _3rect;
}

class _3rect : public QWidget
{
    Q_OBJECT

public:
    explicit _3rect(QWidget *parent = nullptr);
    ~_3rect();

private:
    Ui::_3rect *ui;
};

#endif // _3RECT_H
