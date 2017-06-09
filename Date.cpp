#include "Date.h"
#include <iostream>
#include "stdio.h"
using namespace std;
Date::Date()
{
    day=1;
    month=1;
    year=1900;
}

bool Date::operator<(const Date&b) const
{
    if((day<b.day && month<=b.month && year<=b.year)||(year<b.year)||(month< b.month&& year <=b.year))
        return true;
    else
        return false;
}
Date::~Date()
{
}

void Date::setDate(int d, int m, int y)
{
    do{
        setDay(d);
    }while(!(d>0 && d<32));
    do{
        do{
            setMonth(m);
        }while((m==2 && getDay()>28)|| ((m==4||m==6||m==9||m==11)&& getDay()==31));
    }while(!(m>0 && m<13));
    do{
        setYear(y);
    }while(!(y>1000 && y<9999));
    return;
}

Date Date::getDate() const
{
    cout<< getDay();
    switch(getMonth()){
    case 1:
        cout<<"Gennaio";
        break;
    case 2:
        cout<<"Febbraio";
        break;
    case 3:
        cout<<"Marzo";
        break;
    case 4:
        cout<<"Aprile";
        break;
    case 5:
        cout<<"Maggio";
        break;
    case 6:
        cout<<"Giugno";
        break;
    case 7:
        cout<<"Luglio";
        break;
    case 8:
        cout<<"Agosto";
        break;
    case 9:
        cout<<"Settembre";
        break;
    case 10:
        cout<<"Ottobre";
        break;
    case 11:
        cout<<"Novembre";
        break;
    case 12:
        cout<<"Dicembre";
        break;
    }

    cout<<getYear()<<endl;
    return*this;
}


int Date::getDay() const
{return day;
}

void Date::setDay(int x)
{
    day=x;
}

int Date::getYear() const
{
    return year;
}

void Date::setYear(int value)
{
    year = value;
}

int Date::getMonth() const
{
    return month;
}

void Date::setMonth(int value)
{
    month = value;
}

