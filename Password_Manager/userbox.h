#ifndef USERBOX_H
#define USERBOX_H

#include <QWidget>

namespace Ui {
class userbox;
}

class userbox : public QWidget
{
    Q_OBJECT

public:
    explicit userbox(QWidget *parent = nullptr);
    ~userbox();

private:
    Ui::userbox *ui;
};

#endif // USERBOX_H
