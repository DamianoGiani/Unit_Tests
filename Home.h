#ifndef HOME_H
#define HOME_H
#include <string>
#include <Activity.h>
#include <Date.h>
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

    vector<List> Vector_List;



    void addList(string);
    void deleteList(string);
    List* searchList(string);
    void orderList_name();

};

#endif // HOME_H
