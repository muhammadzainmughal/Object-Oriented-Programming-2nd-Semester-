#ifndef RENTAL_H
#define RENTAL_H

#include "Vehicle.h"
#include "Customer.h"

class Rental
{
private:
    Vehicle* vehicle;
    Customer* customer;
    int days;
    double cost;
    bool active;

public:
    Rental(
    Vehicle* v=NULL,
    Customer* c=NULL,
    int d=0
    );

    void closeRental();
    bool isActive();
    void display();
};

#endif
