#include "FillValve.h"

FillValve::FillValve(double flow)
{
  openState = false;
  flowRate = flow;
}

void FillValve::open()
{
  openState = true;
}

void FillValve::close()
{
  openState = false;
}

bool FillValve::isValveOpen() const
{
  return openState;
}

double FillValve::getFlowRate() const
{
  return flowRate;
}