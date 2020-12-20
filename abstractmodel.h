#ifndef ABSTRACTMODEL_H
#define ABSTRACTMODEL_H
#include <QString>
#include "notimplementedexception.h"


using namespace std;


class AbstractModel
{
public:
    AbstractModel();

    virtual QString toQString() {
        throw NotImplementedException();
    }
};

#endif // ABSTRACTMODEL_H
