#ifndef RENTALSYSTEM_H
#define RENTALSYSTEM_H

#include<vector>

#include "Car.h"
#include "Motorbike.h"
#include "Truck.h"

#include "Customer.h"
#include "Rental.h"
using namespace std;

class RentalSystem
{
private:

    vector<Vehicle*> vehicles;
    vector<Customer*> customers;
    vector<Rental*> rentals;

public:

    void addVehicle();
    void registerCustomer();
    void rentVehicle();
    void returnVehicle();
    void summary();

    ~RentalSystem();
};

#endif
