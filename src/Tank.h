#ifndef TANK_H
#define TANK_H

class Tank
{
private:
  double capacity;
  double currentLevel;

public:
  Tank(double cap);

  void addLiquid(double amount);

  void removeLiquid(double amount);

  double getLevel() const;
};

#endif
