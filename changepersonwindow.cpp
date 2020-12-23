#include "changepersonwindow.h"
#include "ui_changepersonwindow.h"

ChangePersonWindow::ChangePersonWindow(QWidget *parent, Person *person) :
    QDialog(parent),
    ui(new Ui::ChangePersonWindow)
{
    if (!person) this->person = Person();
    else {
        this->person = *person;
        ui->nameEdit->setText(this->person.name);
        ui->surnameEdit->setText(this->person.surname);
        ui->secondNameEdit->setText(this->person.second_name);
        ui->passportNumberEdit->setText(this->person.passport_number);
        ui->passportSeriesEdit->setText(this->person.passport_series);
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
