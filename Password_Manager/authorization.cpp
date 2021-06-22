#include "authorization.h"
#include "ui_authorization.h"
#include <QMessageBox>
#include <QLineEdit>


Authorization::Authorization(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Authorization)
{
    ui->setupUi(this);
    ManagerWindow = new Manager();
    // подключаем к слоту запуска главного окна по кнопке во втором окне
    connect(ManagerWindow, &Manager::firstWindow, this, &Authorization::show);

}

Authorization::~Authorization()
{
    delete ui;
}

void Authorization::on_logInButton_clicked()
{
    QString password=ui->AppPass->text();
    if(password=="qwerty")
    {
        ManagerWindow->show();
        this->close();
        ui->AppPass->clear();
    }
    else
    {
        QMessageBox::warning(this,"","Пароль введен неверно");
        ui->AppPass->clear();
    }
}
