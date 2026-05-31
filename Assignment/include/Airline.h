#ifndef AIRLINE_H
#define AIRLINE_H

#include <vector>
#include "DomesticFlight.h"
#include "EconomyPassenger.h"
#include "Ticket.h"

using namespace std;

class Airline
{
private:

    vector<Flight*> flights;
    vector<Passenger*> passengers;
    vector<Ticket> tickets;

public:

    public:
    void addFlight();
    void displayFlights();
    void registerPassenger();
    void displayPassengers();
    void bookTicket();
    void cancelTicket();
    ~Airline();
};

#endif
