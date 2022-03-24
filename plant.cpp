#include "plant.h"

plant::plant(int newPlantID, string newPlantType)
{
    plantID = newPlantID;
    plantType = newPlantType;
    plantsCount++;
}
