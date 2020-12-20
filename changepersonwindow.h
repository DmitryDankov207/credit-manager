#ifndef CHANGEPERSONWINDOW_H
#define CHANGEPERSONWINDOW_H

#include <QDialog>
#include "person.h"

namespace Ui {
class ChangePersonWindow;
}

class ChangePersonWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ChangePersonWindow(QWidget *parent = nullptr, Person person = Person());
    ~ChangePersonWindow();

    Person person;
private slots:
    void on_buttonBox_accepted();

private:
    Ui::ChangePersonWindow *ui;
};

#endif // CHANGEPERSONWINDOW_H
