#include "SubActivity.h"
#include <string>
#include <vector>

SubActivity::SubActivity()
{

}

SubActivity::~SubActivity()
{

}

string SubActivity::getNameSubActivity() const
{
    return nameSubActivity;
}

void SubActivity::setNameSubActivity(const string &value)
{
    nameSubActivity = value;
}
