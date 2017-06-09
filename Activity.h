#ifndef ACTIVITY_H
#define ACTIVITY_H
#include "Person.h"
#include <vector>
#include <string>
#include <Date.h>
#include <SubActivity.h>

class Activity
{
public:

    vector<SubActivity> subActivities;
    vector<Person> personIncl;
    Activity();
    ~Activity();


    void addPerson(string);
    void removePerson(string);
    void addSubActivity(string);
    void deleteSubActivity(string);


    string getDescriprion() const;
    void setDescriprion(const string &value);

    string getNameActivity() const;
    void setNameActivity(const string &value);

    bool getComplete() const;
    void setComplete(bool value);

    bool getImportant() const;
    void setImportant(bool value);

    Date getExpiration() const;
    void setExpiration(int,int,int);

private:
    bool important;
    bool complete;
    string descriprion;
    Date expiration;
    string nameActivity;


};

#endif // ACTIVITY_H
