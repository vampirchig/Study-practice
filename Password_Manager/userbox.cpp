#include "userbox.h"
#include "ui_userbox.h"

userbox::userbox(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::userbox)
{
    ui->setupUi(this);
}

userbox::~userbox()
{
    delete ui;
}
