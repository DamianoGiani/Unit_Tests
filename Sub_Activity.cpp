#include "Sub_Activity.h"
#include <string>
#include <vector>

Sub_Activity::Sub_Activity()
{

}

Sub_Activity::~Sub_Activity()
{

}

string Sub_Activity::getNameSubActivity() const
{
    return nameSubActivity;
}

void Sub_Activity::setNameSubActivity(const string &value)
{
    nameSubActivity = value;
}
