#ifndef LIST_H
#define LIST_H
#include <string>
#include <Activity.h>
#include <Date.h>
#include <Person.h>
#include <algorithm>
#include <QList>
using namespace std;

class List
{
public:
    vector <Activity> activities;
    List();
    ~List();




    void addActivity(string);
    void deleteActivity(string);
    void showEndedActivity();
    void showImportantActivity();
    void sortActivityName();
    void sortActivityDate();
    Activity* searchActivity(string);
    string getNameList() const;
    void setNameList(const string &value);

private:
    string nameList;

};

#endif // LIST_H
