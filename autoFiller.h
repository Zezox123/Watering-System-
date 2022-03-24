#ifndef AUTOFILLER_H
#define AUTOFILLER_Hx

#include "valve.h"
#include "tankSensor.h"

class autoFiller
{
private:
    int minWaterTankLvl = 1520; // In ml
    tankSensor tankSensor;
    valve valve;
public:
    bool isActive;
    void fillTank();
    void activateValve();
};

#endif // AUTOFILLER_H


