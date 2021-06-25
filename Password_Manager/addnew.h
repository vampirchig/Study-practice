#ifndef ADDNEW_H
#define ADDNEW_H

#include <QDialog>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>

namespace Ui {
class AddNew;
}

class AddNew : public QDialog
{
    Q_OBJECT

public:
    explicit AddNew(QWidget *parent = nullptr);
    ~AddNew();

signals:
    void okClicked();

private slots:
    void on_pushButton_3_clicked();//отмена

    void on_pushButton_2_clicked();//очистить

    void on_pushButton_clicked();//подтвердить

private:
    Ui::AddNew *ui;
    QSqlDatabase db;
    QSqlQuery *query;
};

#endif // ADDNEW_H
