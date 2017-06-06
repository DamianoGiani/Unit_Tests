#include "Sub_Activity.h"
#include <string>
#include <vector>

Sub_Activity::Sub_Activity()
{

}

Sub_Activity::~Sub_Activity()
{

}

    string Sub_Activity::getName_subActivity() const
{
    return name_subActivity;
}

void Sub_Activity::setName_subActivity(const string &value)
{
    name_subActivity = value;
}
