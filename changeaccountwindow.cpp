#define REQUIRED_SALARY 100
#include "changeaccountwindow.h"
#include "ui_changeaccountwindow.h"

ChangeAccountWindow::ChangeAccountWindow(QWidget *parent, Account *account) :
    QDialog(parent),
    ui(new Ui::ChangeAccountWindow)
{
    ui->setupUi(this);

    if (!account) {
        this->account = new Account();
    } else {
        this->account = account;
        ui->lineEdit->setText(QString::number(account->salary));
        ui->listWidget->addItem(account->person.toQString());
    }
}

ChangeAccountWindow::~ChangeAccountWindow()
{
    delete ui;
}

void ChangeAccountWindow::on_buttonBox_accepted()
{
    account->salary = ui->lineEdit->displayText().toDouble();
}

void ChangeAccountWindow::on_buttonBox_rejected()
{

}

void ChangeAccountWindow::on_pushButton_clicked()
{
    ChangePersonWindow changePersonWindow;
    changePersonWindow.setModal(true);
    changePersonWindow.exec();

    qDebug() << changePersonWindow.person.toQString();

    persons->push_back(changePersonWindow.person);
    persons->update_qlist_widget(ui->listWidget);
}

void ChangeAccountWindow::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{

}

void ChangeAccountWindow::on_listWidget_itemClicked(QListWidgetItem *item)
{
    for (auto person : persons->get_models()) {
        if (person.toQString() == item->text()) {
            account->person = person;
        }
    }
}

void validate_credit(Credit &credit) {
    if (credit.active)
        throw logic_error("Credit already exists!");
    else if (credit.expired)
        throw logic_error("Bad cedit history!");
}

bool accept_credit(Account &account) {
    if (account.salary < REQUIRED_SALARY)
        throw logic_error("Salary is less than required!");

    for (auto credit : account.credits) validate_credit(credit);

    return true;
}

void handle_error(logic_error &e) {
    QMessageBox errorBox;
    errorBox.setText(e.what());
    errorBox.exec();
}

double get_amount() {
    AddCreditWindow addCreditWindow;
    addCreditWindow.setModal(true);
    addCreditWindow.exec();

    return addCreditWindow.amount;
}

void ChangeAccountWindow::on_pushButton_2_clicked()
{
    bool accepted = false;

    try {
        accepted = accept_credit(*account);
    }  catch (logic_error e) {
        handle_error(e);
    }
    if (accepted) {
        account->credits.push_back(Credit(get_amount()));
        qDebug() << account->credits.size();
    }
}
