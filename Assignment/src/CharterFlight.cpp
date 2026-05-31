#include <iostream>
#include "CharterFlight.h"
using namespace std;

CharterFlight::CharterFlight(
    string fn,
    string org,
    string dest,
    string date,
    int seats,
    string holder
)
: Flight(fn, org, dest, date, seats)
{
    contractHolder = holder;
}

double CharterFlight::calculateFare()
{
    return 100000;
}

void CharterFlight::display()
{
    cout<<"\n ***** Charter Flight**** " << endl;
    cout<<"Flight No: " << FlightNo << endl;
    cout<<"Origin: " << Origin << endl;
    cout<<"Destination: " << Destination << endl;
    cout<<"Contract Holder: " << contractHolder << endl;
}
