#ifndef TEMPERATUREHUMIDITYSENSOR_H
#define TEMPERATUREHUMIDITYSENSOR_H


class temperatureHumiditySensor
{
public:
    temperatureHumiditySensor();
    int currTemperature;
    int currHumidity;
    void setTemperatureAndHumidity(int, int);
};

#endif // TEMPERATUREHUMIDITYSENSOR_H
