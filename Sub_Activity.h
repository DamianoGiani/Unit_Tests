#ifndef SUB_ACTIVITY_H
#define SUB_ACTIVITY_H

#include <string>
#include <vector>

using namespace std;




class Sub_Activity
{


public:
    Sub_Activity();
    ~Sub_Activity();
    string getNameSubActivity() const;
    void setNameSubActivity(const string &value);




private:
    string nameSubActivity;

};

#endif // SUB_ACTIVITY_H
