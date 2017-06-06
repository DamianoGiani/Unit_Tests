#include "List.h"
#include "Activity.h"
#include "Person.h"
#include "Date.h"
#include "algorithm"
#include "QList"

struct{
    bool operator()(Activity a, Activity b){
        return a.getName_activity()<b.getName_activity();
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
    new_activity.setName_activity(name);
    Activities.push_back(new_activity);

}

void List::deleteActivity(string name)
{
    vector<Activity>::iterator i;
    for(i= Activities.begin(); i!= Activities.end(); i++){
        if(name==i->getName_activity()){
            Activities.erase(Activities.begin()-(i-Activities.begin()));
            return;
        }

     }

}

void List::show_endedActivity()
{
   /* vector<Activity>::iterator i;
    for(i= Activities.begin(); i!= Activities.end(); i++){
        if(
            printf("The activity is end");
            return;
        }

    }return;*/
}

void List::show_importantActivity()
{

}

void List::sortActivity_name()
{
    std::sort(Activities.begin(), Activities.end(), Sorter_Name);
}

void List::sortActivity_date()
{
    std::sort(Activities.begin(), Activities.end(), Sorter_Date);
}

Activity* List::src_Activity(string name)
{
    vector<Activity>::iterator i;
    for(i=Activities.begin(); i!=Activities.end(); i++){
        if(name==i->getName_activity()){
            return &(*i);
                   }
    }
    return NULL;


}

string List::getName_list() const
{
    return name_list;
}

void List::setName_list(const string &value)
{
    name_list = value;
}
