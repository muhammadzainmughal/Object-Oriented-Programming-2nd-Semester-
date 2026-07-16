#ifndef MOTORBIKE_H
#define MOTORBIKE_H
#include "Vehicle.h"

class Motorbike : public Vehicle
{
private:
    int engineCC;

public:

    Motorbike(
    string name="",
    double rate=0,
    int cc=125
    );
    double calculateCost(int days);
    void display();
};

#endif
