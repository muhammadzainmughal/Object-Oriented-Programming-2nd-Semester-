#ifndef BUSINESSPASSENGER_H
#define BUSINESSPASSENGER_H
#include "Passenger.h"

class BusinessPassenger : public Passenger
{
public:
    BusinessPassenger(int id=0,string n="");
    double getRefundPercentage() override;
    void display() override;
};

#endif
