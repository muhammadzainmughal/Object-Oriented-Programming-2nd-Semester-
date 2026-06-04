#ifndef DOMESTICFLIGHT_H
#define DOMESTICFLIGHT_H

#include "Flight.h"

class DomesticFlight : public Flight
{
private:
    double baseFare;

public:

    DomesticFlight(
        string fn="",
        string org="",
        string dest="",
        string date="",
        int seats=0,
        double fare=0
    );

    double calculateFare();
    void display();

    double getBaseFare();
};

#endif
