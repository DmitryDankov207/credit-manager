#ifndef NOTIMPLEMENTEDEXCEPTION_H
#define NOTIMPLEMENTEDEXCEPTION_H
#include <iostream>


class NotImplementedException : public std::logic_error
{
public:
    NotImplementedException() : std::logic_error("Function not implemented!") { };;
};

#endif // NOTIMPLEMENTEDEXCEPTION_H
