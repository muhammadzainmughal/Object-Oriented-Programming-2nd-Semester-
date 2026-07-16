#include<iostream>
#include "Car.h"
using namespace std;

Car::Car(string name,double rate,int s)
:Vehicle(name,rate)
{
    seats=s;
}

double Car::calculateCost(int days)
{ return dailyRate*days; }

void Car::display()
{
    cout<<"\nCar"<<endl;
    cout<<"Model: "<<makeModel<<endl;
    cout<<"Daily Rate: "<<dailyRate<<endl;
    cout<<"Seats: "<<seats<<endl;

    if(available)   // i used condition
    cout<<"Available"<<endl;
    else
    cout<<"Not Available"<<endl;
}
