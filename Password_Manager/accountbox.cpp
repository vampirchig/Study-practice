#include "accountbox.h"

AccountBox::AccountBox(QWidget *parent) : QWidget(parent)
{
    box = new QVBoxLayout(this);
    comboBox = new QComboBox(this);
    box->addWidget(comboBox);

}
