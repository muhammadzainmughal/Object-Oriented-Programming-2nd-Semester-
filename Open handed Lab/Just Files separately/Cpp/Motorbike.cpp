#include<iostream>
#include "Motorbike.h"
using namespace std;

Motorbike::Motorbike(string name,double rate,int cc)
:Vehicle(name,rate)
{
    engineCC=cc;
}

double Motorbike::calculateCost(int days)
{
    double total;
    total=dailyRate*days;

    if(days>7)
    {
    total=total-(total*0.10);
    }
    return total;
}

void Motorbike::display()
{
    cout<<"\nMotorbike"<<endl;
    cout<<"Model: "<<makeModel<<endl;
    cout<<"Daily Rate: "<<dailyRate<<endl;
    cout<<"Engine: "<<engineCC<<" CC"<<endl;

    if(available)
    cout<<"Available"<<endl;
    else
    cout<<"Not Available"<<endl;
}
