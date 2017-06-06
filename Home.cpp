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
        return a.getName_list()<b.getName_list();
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
    new_List.setName_list(name);
    Vector_List.push_back(new_List);
}

void Home::deleteList(string name)
{
    vector<List>::iterator i;
    for(i= Vector_List.begin(); i!= Vector_List.end(); i++){
        if(name==i->getName_list()){
            Vector_List.erase(Vector_List.begin()-(i-Vector_List.begin()));
            return;
        }else
            return;


    }
}

List* Home::searchList(string name)
{
    vector<List>::iterator i;
    for(i=Vector_List.begin(); i!=Vector_List.end(); i++){
        if(name==i-> getName_list()){
            return &(*i);
                   }
    }
    return NULL;
}

void Home::orderList_name()
{
    std::sort(Vector_List.begin(), Vector_List.end(), Sorter_Name);
}
