#ifndef AIRLINE_H
#define AIRLINE_H

#include <vector>
#include <map>

#include "Flight.h"
#include "DomesticFlight.h"
#include "InternationalFlight.h"
#include "CharterFlight.h"

#include "Passenger.h"
#include "EconomyPassenger.h"
#include "BusinessPassenger.h"
#include "FirstClassPassenger.h"

#include "Ticket.h"

using namespace std;

class Airline
{
private:

    vector<Flight*> flights;
    vector<Passenger*> passengers;
    vector<Ticket> tickets;

    map<string,double> revenueMap;

public:

    void addFlight();
    void removeFlight();
    void searchFlight();

    void displayFlights();

    void registerPassenger();
    void removePassenger();

    void displayPassengers();

    void bookTicket();
    void cancelTicket();

    void displayTickets();

    void bookingHistory();

    void saveData();
    void loadData();

    void reports();

    ~Airline();
};

#endif
