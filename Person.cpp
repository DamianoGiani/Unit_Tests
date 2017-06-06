#include "Person.h"

Person::Person()
{

}

Person::~Person()
{

}

string Person::getName() const
{
    return name;
}

void Person::setName(const string &value)
{
    name = value;
}

string Person::getSurname() const
{
    return surname;
}

void Person::setSurname(const string &value)
{
    surname = value;
}

string Person::getRole() const
{
    return role;
}

void Person::setRole(const string &value)
{
    role = value;
}



