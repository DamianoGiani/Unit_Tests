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
    List();
    ~List();
    vector <Activity> Activities;



    void addActivity(string);
    void deleteActivity(string);
    void show_endedActivity();
    void show_importantActivity();
    void sortActivity_name();
    void sortActivity_date();
    Activity* src_Activity(string);
    string getName_list() const;
    void setName_list(const string &value);

private:
    string name_list;
};

#endif // LIST_H
