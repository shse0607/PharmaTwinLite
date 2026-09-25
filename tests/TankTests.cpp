#include <iostream>
#include "../src/Tank.h"

int main()
{
Tank tank(100);

tank.addLiquid(10);

if (tank.getLevel() == 10)
{
std::cout << "TC-001 PASS" << std::endl;
}
else
{
std::cout << "TC-001 FAIL" << std::endl;
}

return 0;
}