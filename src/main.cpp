#include <iostream>

#include "Tank.h"
#include "FillValve.h"
#include "DrainValve.h"

int main()
{
// Create tank with capacity of 100
Tank tank(100);

// Create valves
FillValve fillValve(5);
DrainValve drainValve(2);

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

std::cout << "Tank Level: "
<< tank.getLevel()
<< std::endl;

return 0;
}



/*
#include <iostream>
#include "Tank.h"
#include "FillValve.h"
#include "DrainValve.h"


int main()
{
  Tank tank(100); // initialize tank with capacity of 100

  FillValve valve(5); // initialize fill valve with flow rate of 5
  valve.open(); // open the fill valve

  if(valve.isValveOpen())
  {
    tank.addLiquid(valve.getFlowRate());//  add liquid to the tank
  } 

  //tank.addLiquid(10000);
  //tank.removeLiquid(50);
  
  std::cout << "Tank Level: "
            << tank.getLevel()
            << std::endl;

return 0;
}
*/

