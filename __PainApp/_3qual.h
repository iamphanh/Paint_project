#ifndef _3QUAL_H
#define _3QUAL_H

#include <QWidget>

namespace Ui {
class _3qual;
}

class _3qual : public QWidget
{
    Q_OBJECT

public:
    explicit _3qual(QWidget *parent = nullptr);
    ~_3qual();

private:
    Ui::_3qual *ui;
};

#endif // _3QUAL_H
