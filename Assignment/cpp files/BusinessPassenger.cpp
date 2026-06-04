#include <iostream>
#include "BusinessPassenger.h"

using namespace std;

BusinessPassenger::BusinessPassenger(int id,string n)
: Passenger(id,n)
{
}

double BusinessPassenger::getRefundPercentage()
{
    return 75;
}

void BusinessPassenger::display()
{
    cout<<"ID: "<<passengerId << endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Type: Business"<<endl;
}

