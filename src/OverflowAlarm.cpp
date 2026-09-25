#include "OverflowAlarm.h"

OverflowAlarm::OverflowAlarm()
{
active = false;
}

void OverflowAlarm::checkLevel(double level,
double capacity)
{
if(level > capacity * 0.9)
{
active = true;
}
else
{
active = false;
}
}

bool OverflowAlarm::isActive() const
{
return active;
}