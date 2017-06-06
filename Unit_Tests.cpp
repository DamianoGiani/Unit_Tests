#include <QString>
#include <QtTest>
#include "stdio.h"
#include <iostream>
#include "Activity.h"
#include "Date.h"
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
    void Test_addPerson_incl();
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


    void Test_setDate();
    void Test_DataComp();

};

Unit_TestsTest::Unit_TestsTest(){

}



void Unit_TestsTest::Test_addPerson_incl(){

    Person a;
    Person b;
    Activity Act;
    a.setName("Luigi");
    b.setName("Filippo");
    Act.addPerson_incl("Luigi");
    Act.addPerson_incl("Filippo");
    int size;
    size=Act.Person_incl.size();

    QCOMPARE(2,size);
}

void Unit_TestsTest::Test_removePerson_incl(){
    Person a;
    Person b;
    Activity Act;
    a.setName("Luigi");
    b.setName("Filippo");
    Act.addPerson_incl("Luigi");
    Act.addPerson_incl("Filippo");
    Act.removePerson_incl("Luigi");
    int size;
    size=Act.Person_incl.size();
    QCOMPARE(1,size);

}


void Unit_TestsTest::Test_add_subActivity(){

    Sub_Activity a;
    Sub_Activity b;
    Activity Act;
    a.setName_subActivity("Doccia");
    b.setName_subActivity("calcio");
    Act.add_subActivity("Doccia");
    Act.add_subActivity("calcio");
    int size;
    size= Act.Sub_Activities.size();
    QCOMPARE(2,size);
}

void Unit_TestsTest::Test_delete_subActivity(){
    Sub_Activity a;
    Sub_Activity b;
    Activity Act;
    a.setName_subActivity("Doccia");
    b.setName_subActivity("calcio");
    Act.add_subActivity("Doccia");
    Act.add_subActivity("calcio");
    Act.delete_subActivity("Doccia");
    int size;
    size= Act.Sub_Activities.size();
    QCOMPARE(1,size);
}

void Unit_TestsTest::Test_addList(){
    List a;
    List b;
    Home Hm;
    a.setName_list("Lavoro");
    b.setName_list("Casa");
    Hm.addList("Lavoro");
    Hm.addList("Casa");
    int size;
    size=Hm.Vector_List.size();
    QCOMPARE(2,size);
}
void Unit_TestsTest::Test_deleteList(){
    List a;
    List b;
    Home Hm;
    a.setName_list("Lavoro");
    b.setName_list("Casa");
    Hm.addList("Lavoro");
    Hm.addList("Casa");
    Hm.deleteList("Lavoro");
    int size;
    size=Hm.Vector_List.size();
    QCOMPARE(1,size);
}

void Unit_TestsTest::Test_searchList(){
    List a;
    List b;
    a.setName_list("Casa");
    b.setName_list("Lavoro");
    Home Hm;
    Hm.addList("Casa");
    Hm.addList("Lavoro");
    string lst;
    lst=Hm.searchList("Casa")->getName_list();
    QCOMPARE(a.getName_list(),lst);

}


void Unit_TestsTest::Test_orderList_name(){
    List a;
    List b;
    List c;
    bool correct;
    a.setName_list("Casa");
    b.setName_list("Lavoro");
    c.setName_list("Chiesa");
    Home Hm;
    Hm.addList("Casa");
    Hm.addList("Lavoro");
    Hm.addList("Chiesa");
    Hm.orderList_name();
    if(Hm.Vector_List.begin() < (Hm.Vector_List.begin()+1) && (Hm.Vector_List.begin()+1) < (Hm.Vector_List.begin()+2))
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


void Unit_TestsTest::Test_addActivity(){
    Activity a;
    Activity b;
    List Lst;
    a.setName_activity("Giardinaggio");
    b.setName_activity("Vacanza");
    Lst.addActivity("Giardinaggio");
    Lst.addActivity("Vacanza");
    int size;
    size=Lst.Activities.size();
    QCOMPARE(2,size);
}


void Unit_TestsTest::Test_deleteActivity(){
    Activity a;
    Activity b;
    List Lst;
    a.setName_activity("Giardinaggio");
    b.setName_activity("Vacanza");
    Lst.addActivity("Giardinaggio");
    Lst.addActivity("Vacanza");
    int size;
    Lst.deleteActivity("Giardinaggio");
    size=Lst.Activities.size();
    QCOMPARE(1,size);
}


void Unit_TestsTest:: Test_sortActivity_name(){
    Activity a;
    Activity b;
    Activity c;
    bool correct;
    List lst;
    a.setName_activity("Lavare");
    b.setName_activity("Giardino");
    c.setName_activity("Mangiare");
    lst.addActivity("Giardino");
    lst.addActivity("Lavare");
    lst.addActivity("Mangiare");
    lst.sortActivity_name();
    if(lst.Activities.begin() < (lst.Activities.begin()+1) && (lst.Activities.begin()+1) < (lst.Activities.begin()+2))
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
    a.setName_activity("Casa");
    b.setName_activity("Lavoro");
    c.setName_activity("Chiesa");
    a.setExpiration(1,2,2000);
    b.setExpiration(2,2,2000);
    c.setExpiration(3,2,2000);
    Lst.addActivity("Casa");
    Lst.addActivity("Lavoro");
    Lst.addActivity("Chiesa");
    Lst.sortActivity_date();

    if(Lst.Activities.begin() < (Lst.Activities.begin()+1) && (Lst.Activities.begin()+1) < (Lst.Activities.begin()+2))
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
    a.setName_activity("Calcetto");
    b.setName_activity("Lavoro");
    Lst.addActivity("Calcetto");
    Lst.addActivity("Lavoro");
    string lst;
    lst=Lst.src_Activity("Calcetto")->getName_activity();
    QCOMPARE(lst,a.getName_activity());
}


void Unit_TestsTest::Test_setDate(){
    Date a;
    bool correct;
    a.setDate(1,1,2000);

    if(a.getDay()==1 && a.getMonth()==1 && a.getYear()==2000)
        correct=true;
    else
        correct=false;
    QVERIFY(correct);
}


void Unit_TestsTest::Test_DataComp(){
    Date a;
    Date b;
    bool correct;
    a.setDate(1,1,2000);
    b.setDate(2,1,2000);
    if(a<b)
        correct=true;
    else
        correct=false;
    QVERIFY(correct);
}

QTEST_APPLESS_MAIN(Unit_TestsTest)

#include "Unit_Tests.moc"
