#define ACCOUNTS_FILE_PATH "./accounts.txt"
#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    accounts = new ListSerializer<Account>();
    persons = new ListSerializer<Person>();
    accounts->update_qlist_widget(ui->listWidget);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ChangeAccountWindow changeAccountWindow(this);
    changeAccountWindow.persons = persons;
    changeAccountWindow.setModal(true);
    changeAccountWindow.exec();

    Account *account = changeAccountWindow.account;

    if (account->salary > 0) {
        accounts->push_back(*account);
        accounts->update_qlist_widget(ui->listWidget);
    }
}

Account MainWindow::get_selected_account(QString text) {
    Account result = Account();

    for(auto account : accounts->get_models()) {
        if (account.toQString() == text) {
            result = account;
            break;
        }
    }

    return result;
}

void MainWindow::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    Account account = get_selected_account(item->text());
    qDebug() << account.person.toQString();
    ChangeAccountWindow changeAccountWindow(this, &account);
    changeAccountWindow.persons = persons;
    changeAccountWindow.setModal(true);
    changeAccountWindow.exec();

    account = *(changeAccountWindow.account);
    if (account.salary > 0) {
        accounts->insert(account);
        accounts->update_qlist_widget(ui->listWidget);
    }
}


