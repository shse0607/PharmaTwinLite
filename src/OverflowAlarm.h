#ifndef OVERFLOWALARM_H
#define OVERFLOWALARM_H

class OverflowAlarm
{
private:
bool active;

public:
OverflowAlarm();

void checkLevel(double level,
double capacity);

bool isActive() const;
};

#endif