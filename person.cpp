#include "person.h"

Person::Person()
{

}


QString Person::toQString() {
    return this->name + " " + this->surname;
}
