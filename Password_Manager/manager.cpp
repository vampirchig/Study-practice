#include "manager.h"
#include "ui_manager.h"
#include "authorization.h"
//#include "addnew.h"
#include "QGroupBox"
#include "userbox.h"

Manager::Manager(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::Manager)
{
    ui->setupUi(this);
    addbox = new AddNew();
    const bool connected = connect(addbox, &AddNew::okClicked, this, &Manager::addNewBox, Qt::AutoConnection);
    qDebug() << "Connection established?" << connected;
}

Manager::~Manager()
{
    delete ui;
}

void Manager::addNewBox()
{
    userbox *addBox = new userbox(this);
    ui->verticalLayout3->addWidget(addBox);
}

void Manager::on_LogOut_clicked()
{
    this->close();      // Закрываем окно
    emit firstWindow(); // И вызываем сигнал на открытие окна авторизации
}


void Manager::on_AddAccount_clicked()
{
    //AddNew window;
    addbox->setModal(true);
    addbox->exec();
}

