#ifndef ACTIVITY_H
#define ACTIVITY_H
#include "Person.h"
#include <vector>
#include <string>
#include <Date.h>
#include <Sub_Activity.h>

class Activity
{
public:

    vector<Sub_Activity> Sub_Activities;
    vector<Person> Person_incl;
    Activity();
    ~Activity();


    void addPerson_incl(string);
    void removePerson_incl(string);
    void add_subActivity(string);
    void delete_subActivity(string);


    string getDescriprion() const;
    void setDescriprion(const string &value);

    string getName_activity() const;
    void setName_activity(const string &value);

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
    string name_activity;

};

#endif // ACTIVITY_H
