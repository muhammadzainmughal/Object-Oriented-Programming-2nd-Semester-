#ifndef INTERNATIONALFLIGHT_H
#define INTERNATIONALFLIGHT_H

#include "Flight.h"

class InternationalFlight : public Flight
{
private:
    bool visaRequired;
    double internationalTax;

public:

    InternationalFlight(
        string fn="",
        string org="",
        string dest="",
        string date="",
        int seats=0,
        bool visa=false,
        double tax=0
    );

    double calculateFare();
    void display();
};

#endif
