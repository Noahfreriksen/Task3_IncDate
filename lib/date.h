#ifndef INCDATE_DATE_H
#define INCDATE_DATE_H
#include <ctime>
#include <string>

/*
 * date Class. Initiallizes now as the current time. Has 2 functions. 1 to increment the date with a given number
 * of days. And 1 that returns the date as a string
 */

using namespace std;

class date {

public:
    date();
    void inc(int);
    string toString();
    time_t now;
};


#endif //INCDATE_DATE_H
