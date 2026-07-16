#ifndef VEHICLE_H
#define VEHICLE_H
#include<iostream>
using namespace std;

class Vehicle
{
protected:
    string makeModel;
    double dailyRate;
    bool available;

public:

    Vehicle(string name="",double rate=0);
    virtual double calculateCost(int days)=0;
    virtual void display()=0;

    bool isAvailable();
    void rentVehicle();
    void returnVehicle();
    string getName();

    virtual ~Vehicle(){}
};

#endif
