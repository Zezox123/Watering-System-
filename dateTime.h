#ifndef DATETIME_H
#define DATETIME_H

#include "time.h"
#include <string>
#include <iostream>

using namespace std;

class dateTime
{
private:
    unsigned short second, minute, hour, year, month, day;
public:
    dateTime();
    void setTime(unsigned short, unsigned short, unsigned short, unsigned short, unsigned short, unsigned short);
    void currTime();
    dateTime addSeconds(unsigned short);
    bool compareTime(dateTime);
    string timeToString();
    void print();
};

#endif // DATETIME_H
