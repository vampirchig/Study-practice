#include "addnew.h"
#include "ui_addnew.h"

AddNew::AddNew(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddNew)
{
    ui->setupUi(this);
}

AddNew::~AddNew()
{
    delete ui;
}

void AddNew::on_pushButton_3_clicked()//закрываем окно, если решили не добавлять новый аккаунт
{
    this->close();
}


void AddNew::on_pushButton_2_clicked()//очищаем введенные данные. вдруг пользователь решил ввести другой сайт, и лень удалять в каждой строчке
{
    ui->websiteEdit->clear();
    ui->loginEdit->clear();
    ui->passwordEdit->clear();
    ui->mailEdit->clear();
    ui->phoneEdit->clear();
    ui->linkEdit->clear();
}


void AddNew::on_pushButton_clicked()//подтвердить заполнение аккаунта
{
    this->close();
    emit okClicked();
}


