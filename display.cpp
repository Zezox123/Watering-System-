#include "display.h"

display::display(dateTime currDateTime):currDateTime(currDateTime)
{

}

void display::displayDateTime()
{
    currDateTime.print();
}

void display::displayTemperatureAndHumidity()
{
    cout << data.checkTemperature() << endl << data.checkHumidity() << endl;
}

void display::displayWaterTankCurrLvl()
{
    cout << data.checkCurrWaterLvl() << endl;
}

void display::DisplayIsWaterPumpActive()
{

}
