#include <iostream>
#include "Tank.h"
 
int main()
{
  Tank tank(100);
  
  tank.addLiquid(10);
  
  std::cout << "Tank Level: "
            << tank.getLevel()
            << std::endl;
 
return 0;
}
