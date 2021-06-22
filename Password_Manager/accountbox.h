#ifndef ACCOUNTBOX_H
#define ACCOUNTBOX_H

#include <QWidget>
#include <QVBoxLayout>
#include <QComboBox>
#include <QPlainTextEdit>

class AccountBox : public QWidget
{
    Q_OBJECT
public:
    explicit AccountBox(QWidget *parent = nullptr);
private:
    QVBoxLayout *box;
    QComboBox *comboBox;


signals:

};

#endif // ACCOUNTBOX_H
