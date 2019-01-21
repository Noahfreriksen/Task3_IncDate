#include <iostream>
#include "lib/date.h"

/*
 * Noah Freriksen
 * 402535
 * ETI2A
 *
 * Program that creates a date class with the current date. Increments it with 8 days and prints both
 * first and second date.
 */

using namespace std;

int main() {
    date d1;
    cout << d1.toString() << "\n";

    d1.inc(8);
    cout << d1.toString();

    return 0;
}