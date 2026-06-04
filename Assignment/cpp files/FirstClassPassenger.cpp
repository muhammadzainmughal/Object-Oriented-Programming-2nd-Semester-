#include <iostream>
#include "FirstClassPassenger.h"
using namespace std;

FirstClassPassenger::FirstClassPassenger(int id,string n)
: Passenger(id,n)
{
}

    double FirstClassPassenger::getRefundPercentage()
   {
    return 90;
}

void FirstClassPassenger::display()
{
    cout<< "ID: " <<passengerId<<endl;
    cout<< "Name: " <<name<<endl;
    cout<< "Type: First Class"<<endl;
}

