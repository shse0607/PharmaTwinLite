#include <iostream>

#include "Tank.h"
#include "FillValve.h"
#include "DrainValve.h"
#include "OverflowAlarm.h"

int main()
{
// Create tank with capacity of 100
Tank tank(100);

FillValve fillValve(95);
DrainValve drainValve(2);

OverflowAlarm overflowAlarm;

// Open fill valve
fillValve.open();

if (fillValve.isValveOpen())
{
tank.addLiquid(fillValve.getFlowRate());
}

// Open drain valve
drainValve.open();

if (drainValve.isValveOpen())
{
tank.removeLiquid(drainValve.getFlowRate());
}

overflowAlarm.checkLevel(tank.getLevel(), 100);

std::cout << "Tank Level: "
<< tank.getLevel()
<< std::endl;

if (overflowAlarm.isActive())
{
std::cout << "Overflow Alarm is active!" << std::endl;
}

return 0;
}

