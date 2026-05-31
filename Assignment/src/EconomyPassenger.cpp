#include <iostream>
#include "EconomyPassenger.h"
using namespace std;

EconomyPassenger::EconomyPassenger(int id,string n)
: Passenger(id,n)
{
}

double EconomyPassenger::getRefundPercentage()
{
    return 50;
}

void EconomyPassenger::display()
{
    cout<<"ID: " <<passengerId<<endl;
    cout<<"Name: " <<name<<endl;
    cout<<"Type: Economy" <<endl;
}
