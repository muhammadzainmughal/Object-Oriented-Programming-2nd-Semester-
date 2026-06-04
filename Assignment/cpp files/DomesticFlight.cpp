#include <iostream>
#include "DomesticFlight.h"

using namespace std;

DomesticFlight::DomesticFlight(
    string fn,
    string org,
    string dest,
    string date,
    int seats,
    double fare
)
: Flight(fn,org,dest,date,seats)
{
    baseFare = fare;
}

double DomesticFlight::calculateFare()
{
    return baseFare;
}

double DomesticFlight::getBaseFare()
{
    return baseFare;
}

void DomesticFlight::display()
{
    cout<<"\nDomestic Flight"<<endl;
    cout<<"Flight No: "<<FlightNo<<endl;
    cout<<"Origin: "<<Origin<<endl;
    cout<<"Destination: "<<Destination<<endl;
    cout<<"Date: "<<DepartureDate<<endl;
    cout<<"Seats: "<<AvailableSeats<<"/"<<TotalSeats<<endl;
    cout<<"Fare: "<<baseFare<<endl;
}
