#ifndef TEMPERATUREHUMIDITY_H
#define TEMPERATUREHUMIDITY_H

#include <iostream>

using namespace std;

class temperatureHumidity
{
private:
    int temperature, humidity;
public:
    temperatureHumidity();
    void setTemperature(int);
    int getTemperature();
    void setHumidity(int);
    int getHumidity();
    void print();
};

#endif // TEMPERATUREHUMIDITY_H
