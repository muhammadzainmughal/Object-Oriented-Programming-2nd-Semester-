#include <iostream>
#include "InternationalFlight.h"
using namespace std;

InternationalFlight::InternationalFlight(
    string fn,
    string org,
    string dest,
    string date,
    int seats,
    bool visa,
    double tax
)
: Flight(fn, org, dest, date, seats)
{
    visaRequired = visa;
    internationalTax = tax;
}

   double InternationalFlight::calculateFare()
{
    return 50000 + internationalTax;
}

void InternationalFlight::display()
{
    cout<<"\n*******International Flight*******"<<endl;
    cout<<"Flight No: " <<FlightNo<<endl;
    cout<<"Origin: " <<Origin<<endl;
    cout<<"Destination: " <<Destination<<endl;
    cout<<"Fare: " << calculateFare() <<endl;
}

