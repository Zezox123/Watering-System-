#include "dateTime.h"

dateTime::dateTime()
{
    //Zeit
    currTime();

    //Datum
    time_t date;
    time(&date);
    tm * dateinfo = localtime(&date);
    struct dateinfo;
    day = dateinfo->tm_mday;
    month = dateinfo->tm_mon + 1;
    year = dateinfo->tm_year + 1900;
}

void dateTime::setTime(unsigned short second, unsigned short minute, unsigned short hour, unsigned short day, unsigned short month, unsigned short year)
{
    this->second = second;
    this->minute = minute;
    this->hour = hour;
    this->day = day;
    this->month = month;
    this->year = year;
}

void dateTime::currTime()
{
    time_t time1;
    time (&time1);
    tm * TimeInfo = localtime(&time1);
    struct TimeInfo;
    hour = TimeInfo->tm_hour;
    minute = TimeInfo->tm_min;
    second = TimeInfo->tm_sec;
}

dateTime dateTime::addSeconds(unsigned short seconds)
{
    dateTime currDateTime = dateTime();
    dateTime scheduledTime = currDateTime;
    if(currDateTime.second + seconds > 60) {
        scheduledTime.second = (currDateTime.second + seconds) - 60;
        if(currDateTime.minute + 1 > 60) {
            scheduledTime.minute = 00;
            if(currDateTime.hour + 1 > 24) {
                scheduledTime.hour = 00;
                if(currDateTime.day + 1 > 30) {
                    scheduledTime.day = 00;
                    if(currDateTime.month + 1 > 12) {
                        currDateTime.month = 00;
                        scheduledTime.year++;
                    }
                }
            }
        } else {
            scheduledTime.second += seconds;
        }
    }
    return scheduledTime;
}

bool dateTime::compareTime(dateTime scheduledTime)
{
    dateTime();
    if (scheduledTime.year = this->year && scheduledTime.month == this->month && scheduledTime.day == this->day && scheduledTime.hour == this->hour && scheduledTime.minute == this->minute && scheduledTime.second == this->second) {
        return true;
    }
    return false;
}

string dateTime::timeToString(){
    char ctimeChar[200];
    if( second != 0){
        sprintf(ctimeChar, "%02hi:%02hi:%02hi", hour, minute, second);
    }else if (second == 0){
        sprintf(ctimeChar, "%02hi:%02hi:00", hour, minute);
    }
    string ctimeString(ctimeChar);
    return ctimeString;
}

void dateTime::print()
{
    printf("%02hi.%02hi.%04hi", this->day, this->month, this->year);
    cout << endl << timeToString() << endl;
}
