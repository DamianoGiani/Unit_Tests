#ifndef PERSON_H
#define PERSON_H
#include<string>

using namespace std;

class Person
{
public:
    Person();
    ~Person();
    string getName() const;
    void setName(const string &value);



    string getSurname() const;
    void setSurname(const string &value);

    string getRole() const;
    void setRole(const string &value);

private:
    string name;
    string surname;
    string role;
};

#endif // PERSON_H
