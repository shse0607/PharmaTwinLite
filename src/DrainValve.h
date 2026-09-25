#ifndef DRAINVALVE_H
#define DRAINVALVE_H

class DrainValve 
{
private: 
bool openState;
double flowRate;

public:
DrainValve(double flow);

void open();

void close();

bool isValveOpen() const;

double getFlowRate() const;
};

#endif