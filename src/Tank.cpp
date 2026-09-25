#include "Tank.h"

Tank::Tank(double cap) // initialize tank with specified capacity
{
  capacity = cap;
  currentLevel = 0;
}

void Tank::addLiquid(double amount) // add liquid to the tank
{
  currentLevel += amount;

  if (currentLevel > capacity)
  {
    currentLevel = capacity;
  }
  
}

void Tank::removeLiquid(double amount) // remove liquid from the tank
{
  currentLevel -= amount;

  if (currentLevel < 0)
  {
    currentLevel = 0;
  }
}

double Tank::getLevel() const // get the current level of liquid in the tank
{
  return currentLevel;
}
