#include "Tank.h"

Tank::Tank(double cap)
{
  capacity = cap;
  currentLevel = 0;
}

void Tank::addLiquid(double amount)
{
  currentLevel += amount;
}

void Tank::removeLiquid(double amount)
{
  currentLevel -= amount;
}

double Tank::getLevel() const
{
  return currentLevel;
}
