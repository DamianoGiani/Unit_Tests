#include "List.h"
#include "Activity.h"
#include "Person.h"
#include "Date.h"
#include "algorithm"
#include "QList"

struct{
    bool operator()(Activity a, Activity b){
        return a.getNameActivity()<b.getNameActivity();
    }
}Sorter_Name;

struct{
    bool operator()(Activity a, Activity b){
        return a.getExpiration()<b.getExpiration();
    }
}Sorter_Date;


List::List()
{

}

List::~List()
{

}


void List::addActivity(string name)
{
    Activity new_activity;
    new_activity.setNameActivity(name);
    activities.push_back(new_activity);

}

void List::deleteActivity(string name)
{
    vector<Activity>::iterator i;
    for(i= activities.begin(); i!= activities.end(); i++){
        if(name==i->getNameActivity()){
            activities.erase(activities.begin()-(i-activities.begin()));
            return;
        }

    }

}

void List::showEndedActivity()
{
    /* vector<Activity>::iterator i;
    for(i= Activities.begin(); i!= Activities.end(); i++){
        if(
            printf("The activity is end");
            return;
        }

    }return;*/
}

void List::showImportantActivity()
{

}

void List::sortActivityName()
{
    std::sort(activities.begin(), activities.end(), Sorter_Name);
}

void List::sortActivityDate()
{
    std::sort(activities.begin(), activities.end(), Sorter_Date);
}

Activity* List::searchActivity(string name)
{
    vector<Activity>::iterator i;
    for(i=activities.begin(); i!=activities.end(); i++){
        if(name==i->getNameActivity()){
            return &(*i);
        }
    }
    return NULL;


}

string List::getNameList() const
{
    return nameList;
}

void List::setNameList(const string &value)
{
    nameList = value;
}
