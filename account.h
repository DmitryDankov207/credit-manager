#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <vector>
#include "credit.h"
#include "person.h"

class Account : AbstractModel
{
public:
    Account();
    ~Account();

    QString toQString();

    Person person;
    double balance;
    vector<Credit> credits;
};

#endif // ACCOUNT_H
