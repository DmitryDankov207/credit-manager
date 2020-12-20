#ifndef CREDIT_H
#define CREDIT_H
#include "abstractmodel.h"


class Credit : AbstractModel
{
    friend bool validate_credit(Credit &);
public:
    Credit(double amount) {
        this->amount = amount;
    }

    QString toQstring() {
        QString active = this->active ? "active" : "closed";
        QString expired = this->expired ? "expired" : "not expired";
        return QString::number(amount) + " | " + active + " | " + expired;
    }

    bool active = true;
    bool expired = false;
    double amount;
};

#endif // CREDIT_H
