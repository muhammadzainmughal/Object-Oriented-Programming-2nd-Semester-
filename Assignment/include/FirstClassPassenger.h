#ifndef FIRSTCLASSPASSENGER_H
#define FIRSTCLASSPASSENGER_H
#include "Passenger.h"

class FirstClassPassenger : public Passenger
{
public:
    FirstClassPassenger(int id=0,string n="");
    double getRefundPercentage() override;
    void display() override;
};

#endif
