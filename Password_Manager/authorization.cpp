#include "authorization.h"
#include "ui_authorization.h"

Authorization::Authorization(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Authorization)
{
    ui->setupUi(this);
    ManagerWindow = new Manager();
}

Authorization::~Authorization()
{
    delete ui;
}

void Authorization::on_pushButton_clicked()
{
    QString password=ui->AppPass->text();
    if(password=="qwerty")
    {
        ManagerWindow->show();
        this->close();
    }
}

