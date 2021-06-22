#include "manager.h"
#include "ui_manager.h"
#include "authorization.h"
#include "addnew.h"

Manager::Manager(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Manager)
{
    ui->setupUi(this);
    AddNew *add = new AddNew();
    connect(add, SIGNAL(AddNew()), this, SLOT(PassArea()));
    add->show();

}

Manager::~Manager()
{
    delete ui;
}


void Manager::on_LogOut_clicked()
{
    this->close();      // Закрываем окно
    emit firstWindow(); // И вызываем сигнал на открытие окна авторизации
}


void Manager::on_AddAccount_clicked()
{
    AddNew window;
    window.setModal(true);
    window.exec();
}

