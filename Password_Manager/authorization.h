#ifndef AUTHORIZATION_H
#define AUTHORIZATION_H

#include <QDialog>
#include <manager.h>

namespace Ui {
class Authorization;
}

class Authorization : public QDialog
{
    Q_OBJECT

public:
    explicit Authorization(QWidget *parent = nullptr);
    ~Authorization();

private slots:
    void on_logInButton_clicked();

private:
    Ui::Authorization *ui;
    Manager *ManagerWindow;
};

#endif // AUTHORIZATION_H
