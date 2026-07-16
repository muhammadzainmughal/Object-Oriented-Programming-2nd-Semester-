#include<iostream>
#include "Vehicle.h"
using namespace std;
Vehicle::Vehicle(string name,double rate)
{
    makeModel=name;
    dailyRate=rate;
    available=true;
}

bool Vehicle::isAvailable()
{ return available;
}

void Vehicle::rentVehicle()
{ available=false;}

void Vehicle::returnVehicle()
{ available=true;
}

string Vehicle::getName()
{ return makeModel;
}
