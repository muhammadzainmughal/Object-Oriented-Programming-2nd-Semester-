#ifndef FLIGHT_H
#define FLIGHT_H

#include <iostream>
using namespace std;

class Flight
{
protected:
    string FlightNo;
    string Origin;
    string Destination;
    string DepartureDate;
    int TotalSeats;
    int AvailableSeats;

public:
    Flight(string fn=" ", string org=" ", 
	string dest=" ", string date=" ", 
	int seats=0)
    {
    FlightNo= fn;
    Origin=org;
    Destination=dest;
    DepartureDate=date;
    TotalSeats=seats;
    AvailableSeats = seats;
    }

    virtual double calculateFare() = 0;
    virtual void display() = 0;


    string getFlightNo()
    { return FlightNo;
    }

    int getAvailableSeats()
    {
    return AvailableSeats;
    }

    void bookSeat()
    {
if(AvailableSeats > 0)
    AvailableSeats--;
    }

    virtual ~Flight(){}
};

#endif
