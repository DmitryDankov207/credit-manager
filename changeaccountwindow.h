#ifndef CHANGEACCOUNTWINDOW_H
#define CHANGEACCOUNTWINDOW_H
#include <QMessageBox>
#include <QDialog>
#include "account.h"
#include "addcreditwindow.h"
#include "changecreditwindow.h"
#include "changepersonwindow.h"
#include "listserializer.h"

namespace Ui {
class ChangeAccountWindow;
}

class ChangeAccountWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ChangeAccountWindow(QWidget *parent = nullptr, Account *account = nullptr);
    ~ChangeAccountWindow();

    Account *account;
    ListSerializer<Person> *persons;

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

    void on_pushButton_clicked();

    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);

    void on_listWidget_itemClicked(QListWidgetItem *item);

    void on_pushButton_2_clicked();

private:
    Ui::ChangeAccountWindow *ui;
};

#endif // CHANGEACCOUNTWINDOW_H
