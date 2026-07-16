#ifndef TRUCK_H
#define TRUCK_H
#include "Vehicle.h"

class Truck : public Vehicle
{
private:
    double payload;
public:
    Truck(
    string name="",
    double rate=0,
    double p=0
    );

    double calculateCost(int days);
    void display();
};

#endif
