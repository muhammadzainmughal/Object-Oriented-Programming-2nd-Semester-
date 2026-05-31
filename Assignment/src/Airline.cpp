#include <iostream>
#include "Airline.h"
#include "Exceptions.h"
using namespace std;

void Airline::addFlight()
{
    string fn, org, dest, date;
    int seats;
    double fare;

    cout<<"\nEnter Flight Number: ";
    cin>>fn;
    cout<<"Enter Origin: ";
    cin>>org;
    cout<<"Enter Destination: ";
    cin>>dest;

    cout<<"Enter Departure Date: ";
    cin>>date;
    cout<<"Enter Total Seats: ";
    cin>>seats;
    cout<<"Enter Fare: ";
    cin>>fare;

    DomesticFlight* flight;

    flight = new DomesticFlight(
    fn,
    org,
    dest,
    date,
    seats,
    fare
    );

    flights.push_back(flight);
    cout << "Flight Added Successfully!" << endl;
}

void Airline::displayFlights()
{
    cout << "\n===== FLIGHTS =====" << endl;
    for(int i = 0; i < flights.size(); i++)
    {
    flights[i]->display();
    cout<<endl;
    }
}

void Airline::registerPassenger()
{
    int id;
    string name;
    cout<<"\nEnter Passenger ID: ";
    cin>>id;
    cout<<"Enter Passenger Name: ";
    cin>>name;

    EconomyPassenger* passenger;
    passenger = new EconomyPassenger(id, name);
    passengers.push_back(passenger);

    cout << "Passenger Registered Successfully!" << endl;
}

void Airline::displayPassengers()
{
    cout<< "\n****** PASSENGERS ****** " << endl;

    for(int i = 0; i < passengers.size(); i++)
    {
    passengers[i]->display();
    cout<<endl;
    }
}

void Airline::bookTicket()
{
    if(flights.size() == 0)
    {
    cout<<"No Flights Available!"<<endl;
    return;
    }

    if(passengers.size() == 0)
    {
    cout<<"No Passengers Available!"<<endl;
    return;
    }

    try
    {
    if(flights[0]->getAvailableSeats() <= 0)
    {
    throw FlightFullException();
    }

    flights[0]->bookSeat();
    int ticketID = tickets.size() + 1;

    Ticket ticket(
    ticketID,
    flights[0],
    passengers[0],
    ticketID,
    flights[0]->calculateFare()
        );
    tickets.push_back(ticket);

    cout<<"Ticket Booked Successfully!" << endl;
    }

    catch(FlightFullException e)
    {
    e.message();
    }
}

void Airline::cancelTicket()
{
    try
    {
    if(tickets.size() == 0)
    {
        throw InvalidCancellationException();
    }

    tickets.pop_back();
    cout<<"Ticket Cancelled Successfully!" << endl;
    }

    catch(InvalidCancellationException e)
    {
    e.message();
    }
}

Airline::~Airline()
{
    for(int i = 0; i < flights.size(); i++)
    {
    delete flights[i];
    }

    for(int i = 0; i < passengers.size(); i++)
    {
    delete passengers[i];
    }
}
