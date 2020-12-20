#include "addcreditwindow.h"
#include "ui_addcreditwindow.h"

AddCreditWindow::AddCreditWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddCreditWindow)
{
    ui->setupUi(this);
}

AddCreditWindow::~AddCreditWindow()
{
    delete ui;
}
