#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"

class Car : public Vehicle
{
private:
    int seats;
public:
    Car(
    string name="",
    double rate=0,
    int s=4
    );

    double calculateCost(int days);
    void display();
};

#endif
