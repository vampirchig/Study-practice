#ifndef ADDNEW_H
#define ADDNEW_H

#include <QDialog>


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
  void addNew();

private slots:
    void on_pushButton_3_clicked();//отмена

    void on_pushButton_2_clicked();//очистить

    void on_pushButton_clicked();//подтвердить

private:
    Ui::AddNew *ui;
};

#endif // ADDNEW_H
