#include "temperatureHumidity.h"

temperatureHumidity::temperatureHumidity()
{

}

int temperatureHumidity::getTemperature()
{
    return temperature;
}

int temperatureHumidity::getHumidity()
{
    return humidity;
}

void temperatureHumidity::print()
{
    cout << temperature << " " << humidity << endl;
}
