#include "account.h"
#include <iostream>

Account::Account()
{

}

Account::~Account()
{
//    delete person;
}

QString Account::toQString() {
    return person.toQString() + " account";
}

