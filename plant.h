#ifndef PLANT_H
#define PLANT_H

#include <string>
using namespace std;

const int maxPlantsCount = 10;

class plant
{
public:
    int plantsCount = 0;
    string plantType;
    int plantID;
    plant(int, string);
};

#endif // PLANT_H
