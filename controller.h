#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "temperatureHumidity.h"
#include "tankSensor.h"
#include "relay.h"

enum plantType {
    eggplant,
    tomatos,
    potatos
};

class controller
{
private:
    dateTime scheduledTime;
    tankSensor tank;
    temperatureHumidity plant;
    relay pump;
    int PlantRequiredWaterLvl = 0; // In ml
public:
    void choosePlantToWater(plantType);
    int checkCurrWaterLvl();
    int checkHumidity();
    int checkTemperature();
    bool isPumpActive = false;
    void activateRelay();
};

#endif // CONTROLLER_H
