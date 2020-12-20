#include "changepersonwindow.h"
#include "ui_changepersonwindow.h"

ChangePersonWindow::ChangePersonWindow(QWidget *parent, Person person) :
    QDialog(parent),
    ui(new Ui::ChangePersonWindow)
{
    if (!person.id) person = Person();
    else {
        ui->nameEdit->setText(person.name);
        ui->surnameEdit->setText(person.surname);
        ui->secondNameEdit->setText(person.second_name);
        ui->passportNumberEdit->setText(person.passport_number);
        ui->passportSeriesEdit->setText(person.passport_series);
    }
    ui->setupUi(this);
}

ChangePersonWindow::~ChangePersonWindow()
{
    delete ui;
}

void ChangePersonWindow::on_buttonBox_accepted()
{
    person.name = ui->nameEdit->text();
    person.surname = ui->surnameEdit->text();
    person.second_name = ui->secondNameEdit->text();
    person.passport_number = ui->passportNumberEdit->text();
    person.passport_series = ui->passportSeriesEdit->text();
}
