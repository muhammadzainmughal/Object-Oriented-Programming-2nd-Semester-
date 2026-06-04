#ifndef CHARTERFLIGHT_H
#define CHARTERFLIGHT_H

#include "Flight.h"

class CharterFlight : public Flight
{
private:
    string contractHolder;

public:

    CharterFlight(
        string fn="",
        string org="",
        string dest="",
        string date="",
        int seats=0,
        string holder=""
    );

    double calculateFare();
    void display();
};

#endif
