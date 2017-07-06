#include <QString>
#include <QtTest>
#include "stdio.h"
#include <iostream>
#include "Activity.h"
#include <QDate>
#include "List.h"
#include "Home.h"
#include "Person.h"
#include "Sub_Activity.h"

class Unit_TestsTest : public QObject
{
    Q_OBJECT

public:
    Unit_TestsTest();


private Q_SLOTS:
    void Test_addPerson_incl();//Activity
    void Test_removePerson_incl();
    void Test_add_subActivity();
    void Test_delete_subActivity();

    void Test_addList();//Home
    void Test_deleteList();
    void Test_searchList();
    void Test_orderList_name();

    void Test_addActivity();//List
    void Test_deleteActivity();
    void Test_sortActivity_name();
    void Test_sortActivity_date();
    void Test_src_Activity();


    void Test_setDate();//Date
    void Test_leapyear();

};

Unit_TestsTest::Unit_TestsTest(){

}



void Unit_TestsTest::Test_addPerson_incl(){ //Activity

    Person a;
    Person b;
    Activity Act;
    a.setName("Luigi");
    b.setName("Filippo");
    Act.addPerson("Luigi");
    Act.addPerson("Filippo");
    int size;
    size=Act.personIncl.size();

    QCOMPARE(2,size);
}

void Unit_TestsTest::Test_removePerson_incl(){
    Person a;
    Person b;
    Activity Act;
    a.setName("Luigi");
    b.setName("Filippo");
    Act.addPerson("Luigi");
    Act.addPerson("Filippo");
    Act.removePerson("Luigi");
    int size;
    size=Act.personIncl.size();
    QCOMPARE(1,size);

}


void Unit_TestsTest::Test_add_subActivity(){

    Sub_Activity a;
    Sub_Activity b;
    Activity Act;
    a.setNameSubActivity("Doccia");
    b.setNameSubActivity("calcio");
    Act.addSubActivity("Doccia");
    Act.addSubActivity("calcio");
    int size;
    size= Act.subActivities.size();
    QCOMPARE(2,size);
}

void Unit_TestsTest::Test_delete_subActivity(){
    Sub_Activity a;
    Sub_Activity b;
    Activity Act;
    a.setNameSubActivity("Doccia");
    b.setNameSubActivity("calcio");
    Act.addSubActivity("Doccia");
    Act.addSubActivity("calcio");
    Act.deleteSubActivity("Doccia");
    int size;
    size= Act.subActivities.size();
    QCOMPARE(1,size);
}

void Unit_TestsTest::Test_addList(){ //Home
    List a;
    List b;
    Home Hm;
    a.setNameList("Lavoro");
    b.setNameList("Casa");
    Hm.addList("Lavoro");
    Hm.addList("Casa");
    int size;
    size=Hm.Agenda.size();
    QCOMPARE(2,size);
}
void Unit_TestsTest::Test_deleteList(){
    List a;
    List b;
    Home Hm;
    a.setNameList("Lavoro");
    b.setNameList("Casa");
    Hm.addList("Lavoro");
    Hm.addList("Casa");
    Hm.deleteList("Lavoro");
    int size;
    size=Hm.Agenda.size();
    QCOMPARE(1,size);
}

void Unit_TestsTest::Test_searchList(){
    List a;
    List b;
    a.setNameList("Casa");
    b.setNameList("Lavoro");
    Home Hm;
    Hm.addList("Casa");
    Hm.addList("Lavoro");
    string lst;
    lst=Hm.searchList("Casa")->getNameList();
    QCOMPARE(a.getNameList(),lst);

}


void Unit_TestsTest::Test_orderList_name(){
    List a;
    List b;
    List c;
    bool correct;
    a.setNameList("Casa");
    b.setNameList("Lavoro");
    c.setNameList("Chiesa");
    Home Hm;
    Hm.addList("Casa");
    Hm.addList("Lavoro");
    Hm.addList("Chiesa");
    Hm.orderListName();
    if(Hm.Agenda.begin() < (Hm.Agenda.begin()+1) && (Hm.Agenda.begin()+1) < (Hm.Agenda.begin()+2))
        correct=true;
    else
        correct=false;
    QVERIFY(correct);
}

/*string second=(Hm.Vector_List.begin()+1)->getName_list();
    string first=(Hm.Vector_List.begin()->getName_list();
    QCOMPARE(first,c.getName_list());
    QCOMPARE(second,b.getName_list());
}*/


void Unit_TestsTest::Test_addActivity(){ //List
    Activity a;
    Activity b;
    List Lst;
    a.setNameActivity("Giardinaggio");
    b.setNameActivity("Vacanza");
    Lst.addActivity("Giardinaggio");
    Lst.addActivity("Vacanza");
    int size;
    size=Lst.activities.size();
    QCOMPARE(2,size);
}


void Unit_TestsTest::Test_deleteActivity(){
    Activity a;
    Activity b;
    List Lst;
    a.setNameActivity("Giardinaggio");
    b.setNameActivity("Vacanza");
    Lst.addActivity("Giardinaggio");
    Lst.addActivity("Vacanza");
    int size;
    Lst.deleteActivity("Giardinaggio");
    size=Lst.activities.size();
    QCOMPARE(1,size);
}


void Unit_TestsTest:: Test_sortActivity_name(){
    Activity a;
    Activity b;
    Activity c;
    bool correct;
    List lst;
    a.setNameActivity("Lavare");
    b.setNameActivity("Giardino");
    c.setNameActivity("Mangiare");
    lst.addActivity("Giardino");
    lst.addActivity("Lavare");
    lst.addActivity("Mangiare");
    lst.sortActivityName();
    if(lst.activities.begin() < (lst.activities.begin()+1) && (lst.activities.begin()+1) < (lst.activities.begin()+2))
        correct=true;
    else
        correct=false;
    QVERIFY(correct);

    //string Lst=lst.Activities.begin()->getName_activity();

    //QCOMPARE(Lst,b.getName_activity());

}


void Unit_TestsTest::Test_sortActivity_date(){
    Activity a;
    Activity b;
    Activity c;
    List Lst;
    bool correct;
    a.setNameActivity("Casa");
    b.setNameActivity("Lavoro");
    c.setNameActivity("Chiesa");
    a.setExpiration(1,2,2000);
    b.setExpiration(2,2,2000);
    c.setExpiration(3,2,2000);
    Lst.addActivity("Casa");
    Lst.addActivity("Lavoro");
    Lst.addActivity("Chiesa");
    Lst.sortActivityDate();

    if(Lst.activities.begin() < (Lst.activities.begin()+1) && (Lst.activities.begin()+1) < (Lst.activities.begin()+2))
        correct=true;
    else
        correct=false;
    QVERIFY(correct);
    // string lst=Lst.Activities.begin()->getName_activity();
    //QCOMPARE(lst,a.getName_activity());
}

void Unit_TestsTest::Test_src_Activity(){
    Activity a;
    Activity b;
    List Lst;
    a.setNameActivity("Calcetto");
    b.setNameActivity("Lavoro");
    Lst.addActivity("Calcetto");
    Lst.addActivity("Lavoro");
    string lst;
    lst=Lst.searchActivity("Calcetto")->getNameActivity();
    QCOMPARE(lst,a.getNameActivity());
}


void Unit_TestsTest::Test_setDate(){ //Date
    QDate a;
    bool correct;
    a.setDate(2000,1,1);

    if(a.day()==1 && a.month()==1 && a.year()==2000)
        correct=true;
    else
        correct=false;
    QVERIFY(correct);
}


void Unit_TestsTest::Test_leapyear(){
    QDate a;
    bool correct;
    a.setDate(2016,1,1);
    if(a.isLeapYear(a.year()))
        correct=true;
    else
        correct=false;
    QVERIFY(correct);
}

QTEST_APPLESS_MAIN(Unit_TestsTest)

#include "Unit_Tests.moc"
