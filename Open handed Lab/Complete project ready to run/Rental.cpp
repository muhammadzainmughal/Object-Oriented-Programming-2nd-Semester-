#include<iostream>
#include "Rental.h"
using namespace std;

Rental::Rental(
Vehicle* v,
Customer* c,
int d)
{
    vehicle = v;
    customer = c;
    days = d;
    cost = vehicle->calculateCost(days);
    active = true;

    vehicle->rentVehicle();
    customer->rentVehicle();
}

void Rental::closeRental()
{
    active = false;
    vehicle->returnVehicle();
    customer->returnVehicle();
}

bool Rental::isActive()
{ return active;
}

void Rental::display()
{
    cout<<"\n===== Rental ====="<<endl;
    cout<<"Customer: "<<customer->getName()<<endl;
    cout<<"Vehicle: "<<vehicle->getName()<<endl;
    cout<<"Days: "<<days<<endl;
    cout<<"Total Cost: "<<cost<<endl;

    if(active)
    cout<<"Status: Active"<<endl;
    else
    cout<<"Status: Returned"<<endl;
}
