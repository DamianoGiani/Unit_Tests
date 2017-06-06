#include "Activity.h"
#include "Person.h"
#include "Sub_Activity.h"

Activity::Activity()
{

}

Activity::~Activity()
{

}



void Activity::addPerson_incl(string name)
{
    Person new_person;
    new_person.setName(name);
    Person_incl.push_back(new_person);
}

void Activity::removePerson_incl(string name)
{
    vector<Person>::iterator i;
    for(i=Person_incl.begin();i!=Person_incl.end();i++){
        if (name==i->getName()){
            Person_incl.erase(Person_incl.begin()+(i-Person_incl.begin()));
                    return;
        }
    }
}



string Activity::getDescriprion() const
{
    return descriprion;
}

void Activity::setDescriprion(const string &value)
{
    descriprion = value;
}

string Activity::getName_activity() const
{
    return name_activity;
}

void Activity::setName_activity(const string &value)
{
    name_activity = value;
}

bool Activity::getComplete() const
{
    return complete;
}

void Activity::setComplete(bool value)
{
    complete = value;
}

bool Activity::getImportant() const
{
    return important;
}

void Activity::setImportant(bool value)
{
    important = value;
}

Date Activity::getExpiration() const
{
    return expiration;
}

void Activity::setExpiration(int d, int m, int y)
{
    expiration.setDate(d,m,y);
    return;
}

void Activity::add_subActivity(string name)
{
    Sub_Activity new_SubAct;
    new_SubAct.setName_subActivity(name);
    Sub_Activities.push_back(new_SubAct);

}

void Activity::delete_subActivity(string name)
{
    vector<Sub_Activity>::iterator i;

    for(i= Sub_Activities.begin(); i!= Sub_Activities.end(); i++){
        if(name==i->getName_subActivity()){
            Sub_Activities.erase(Sub_Activities.begin()-(i-Sub_Activities.begin()));
            return;
        }
    }
}
