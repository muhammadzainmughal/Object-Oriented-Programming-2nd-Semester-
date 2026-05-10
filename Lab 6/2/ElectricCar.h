//        ********** Semester 2 ***********
//        ********** WEEK 6 TASK 2 **********
/* Ride Booking System */

#ifndef ELECTRICCAR_H
#define ELECTRICCAR_H

#include<iostream>
#include<string>
using namespace std;

class Vehicle
{
protected:
    string brand;
public:

    Vehicle(string b)
    {
    brand = b;
    cout<<"Vehicle Constructor Called"<<endl;
    }
};

// Derived Class
class Car : public Vehicle
{
protected:
    string model;
public:

    Car(string b, string m)
        : Vehicle(b)
    {
    model = m;
    cout<<"Car Constructor Called"<<endl;
    }
};

// Derived Class
class ElectricCar : public Car
{
private:
    int batteryCapacity;
public:

    ElectricCar(string b, string m, int bc)
        : Car(b, m)
    {
        batteryCapacity = bc;
        cout<<"Electric Car Constructor Called"<<endl;
    }

    void display()
    {
    cout<<"\nBrand: "<<brand<<endl;
    cout<<"Model: "<<model<<endl;
    cout<<"Battery Capacity: "<<batteryCapacity<<"kWh"<<endl;
    }
};

#endif
