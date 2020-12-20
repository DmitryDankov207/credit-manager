#ifndef PERSON_H
#define PERSON_H
#include "abstractmodel.h"


class Person : AbstractModel
{
public:
    Person();

    int id;
    QString name;
    QString surname;
    QString second_name;
    QString passport_number;
    QString passport_series;

    QString toQString();
};

#endif // PERSON_H
