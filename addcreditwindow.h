#ifndef ADDCREDITWINDOW_H
#define ADDCREDITWINDOW_H

#include <QDialog>

namespace Ui {
class AddCreditWindow;
}

class AddCreditWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AddCreditWindow(QWidget *parent = nullptr);
    ~AddCreditWindow();

    double amount;
private:
    Ui::AddCreditWindow *ui;
};

#endif // ADDCREDITWINDOW_H
