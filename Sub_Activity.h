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
    string getName_subActivity() const;
    void setName_subActivity(const string &value);




private:
    string name_subActivity;

};

#endif // SUB_ACTIVITY_H
