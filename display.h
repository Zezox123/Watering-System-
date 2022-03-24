#ifndef DISPLAY_H
#define DISPLAY_H

#include "dateTime.h"
#include "controller.h"

class display
{
private:
   bool switchSys;
   dateTime currDateTime;
   controller data;
public:
    display(dateTime, temperatureHumidity, tankSensor, relay);
    void displayDateTime();
    void displayTemperatureAndHumidity();
    void displayWaterTankCurrLvl();
    void displayIsWaterPumpActive();
};

#endif // DISPLAY_H
