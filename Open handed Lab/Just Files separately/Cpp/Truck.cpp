#include<iostream>
#include "Truck.h"
using namespace std;

Truck::Truck(string name,double rate,double p)
:Vehicle(name,rate)
{
    payload=p;
}

double Truck::calculateCost(int days)
{
    double total;
    total=dailyRate*days;
    total=total+(total*0.20);
    return total;
}

void Truck::display()
{
    cout<<"\nTruck"<<endl;
    cout<<"Model: "<<makeModel<<endl;
    cout<<"Daily Rate: "<<dailyRate<<endl;
    cout<<"Payload: "<<payload<<" Tons"<<endl;

    if(available)
    cout<<"Available"<<endl;
    else
    cout<<"Not Available"<<endl;
}
