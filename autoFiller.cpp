#include "autoFiller.h"

void autoFiller::fillTank()
{
    if (tankSensor.currWaterTankLvl == minWaterTankLvl) {
        activateValve();
    } else {
        valve.off();
    }
}

void autoFiller::activateValve()
{
    //3480 ml in 116 seconds
    while (tankSensor.currWaterTankLvl != tankSensor.tank.maxCapacity) {
        valve.on();
    }
}
