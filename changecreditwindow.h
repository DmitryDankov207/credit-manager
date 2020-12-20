#ifndef CHANGECREDITWINDOW_H
#define CHANGECREDITWINDOW_H

#include <QDialog>

namespace Ui {
class ChangeCreditWindow;
}

class ChangeCreditWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ChangeCreditWindow(QWidget *parent = nullptr);
    ~ChangeCreditWindow();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::ChangeCreditWindow *ui;
};

#endif // CHANGECREDITWINDOW_H
