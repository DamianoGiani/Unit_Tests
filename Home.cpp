#include "Home.h"
#include <string>
#include "Activity.h"
#include "Date.h"
#include "Person.h"
#include "algorithm"
#include "QList"
#include "List.h"

struct{
    bool operator()(List a, List b){
        return a.getNameList()<b.getNameList();
    }
}Sorter_Name;


Home::Home()
{

}

Home::~Home()
{

}



void Home::addList(string name)
{
    List new_List;
    new_List.setNameList(name);
    Agenda.push_back(new_List);
}

void Home::deleteList(string name)
{
    vector<List>::iterator i;
    for(i= Agenda.begin(); i!= Agenda.end(); i++){
        if(name==i->getNameList()){
            Agenda.erase(Agenda.begin()-(i-Agenda.begin()));
            return;
        }else
            return;


    }
}

List* Home::searchList(string name)
{
    vector<List>::iterator i;
    for(i=Agenda.begin(); i!=Agenda.end(); i++){
        if(name==i-> getNameList()){
            return &(*i);
        }
    }
    return NULL;
}

void Home::orderListName()
{
    std::sort(Agenda.begin(), Agenda.end(), Sorter_Name);
}
