#ifndef HOME_H
#define HOME_H
#include <string>
#include <Activity.h>
#include <QDate>
#include <Person.h>
#include <algorithm>
#include <QList>
#include <List.h>

using namespace std;

class Home
{
public:
    Home();
    ~Home();

    vector<List> Agenda;



    void addList(string);
    void deleteList(string);
    List* searchList(string);
    void orderListName();

};

#endif // HOME_H
