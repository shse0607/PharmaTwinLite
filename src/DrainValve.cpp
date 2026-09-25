#include "DrainValve.h"

DrainValve::DrainValve(double flow)
{
openState = false;
flowRate = flow;
}

void DrainValve::open()
{
openState = true;
}

void DrainValve::close()
{
openState = false;
}

bool DrainValve::isValveOpen() const
{
return openState;
}

double DrainValve::getFlowRate() const
{
return flowRate;
}