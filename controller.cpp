#include "controller.h"

void controller::choosePlantToWater(plantType plant)
{
    switch(plant)
    {
        case eggplant:
            // 30ml every 1 second
            scheduledTime.addSeconds(5);
            PlantRequiredWaterLvl = 150;
            break;
        case potatos:
            scheduledTime.addSeconds(8);
            PlantRequiredWaterLvl = 240;
            break;
        case tomatos:
            scheduledTime.addSeconds(11);
            PlantRequiredWaterLvl = 330;
            break;
        default:
            break;
    }
}

int controller::checkCurrWaterLvl()
{
    return tank.currWaterTankLvl;
}

int controller::checkHumidity()
{
    return plant.getHumidity();
}

int controller::checkTemperature()
{
    return plant.getTemperature();
}

void controller::activateRelay()
{
    pump.on();
    isPumpActive = true;
    if (scheduledTime.compareTime(scheduledTime)) {
        pump.off();
        isPumpActive = false;
        pump.waterVolume = 0;
    }
}


