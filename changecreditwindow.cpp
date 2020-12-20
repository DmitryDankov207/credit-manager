#include "changecreditwindow.h"
#include "ui_changecreditwindow.h"

ChangeCreditWindow::ChangeCreditWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChangeCreditWindow)
{
    ui->setupUi(this);
}

ChangeCreditWindow::~ChangeCreditWindow()
{
    delete ui;
}

void ChangeCreditWindow::on_buttonBox_accepted()
{

}
