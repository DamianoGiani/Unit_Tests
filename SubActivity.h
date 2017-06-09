#ifndef SUB_ACTIVITY_H
#define SUB_ACTIVITY_H

#include <string>
#include <vector>

using namespace std;




class SubActivity
{


public:
    SubActivity();
    ~SubActivity();
    string getNameSubActivity() const;
    void setNameSubActivity(const string &value);




private:
    string nameSubActivity;

};

#endif // SUB_ACTIVITY_H
