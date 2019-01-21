#include "date.h"
#include <iostream>

/*
 * date Class. Initiallizes now as the current time. Has 2 functions. 1 to increment the date with a given number
 * of days. And 1 that returns the date as a string
 */

using namespace std;

date::date() {
    now = time(nullptr);
}

void date::inc(int nod){
    //amount of seconds in a day
    int spd = 86400;

    //increase the date with total of seconds of days
    now = now + nod * spd;
}

string date::toString() {
    struct tm * timeinfo;
    timeinfo = localtime(&now);
    int day = timeinfo->tm_mday;
    int month = timeinfo->tm_mon+1;
    int year = timeinfo->tm_year+1900;
    string date;

    date = to_string(day) + "-" + to_string(month) + "-" + to_string(year);

    return date;
}

