#ifndef TANKSENSOR_H
#define TANKSENSOR_H

#include "dateTime.h"
#include "watertank.h"
#include <iostream>
#include <vector>

using namespace std;

class tankSensor
{
private:
    vector<dateTime> scheduledTestTime;
public:
    tankSensor();
    waterTank tank;
    int currWaterTankLvl;
    int missingWaterLvl();
    void setWaterTankCurrLvl(int);
    void print();
};

#endif // TANKSENSOR_H
