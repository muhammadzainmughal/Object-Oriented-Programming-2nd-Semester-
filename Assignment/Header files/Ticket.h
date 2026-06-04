#ifndef TICKET_H
#define TICKET_H


#include <iostream>
using namespace std;

#include "Flight.h"
#include "Passenger.h"

class Ticket
{
private:
    int ticketId;
    Flight* flight;
    Passenger* passenger;
    int seatNumber;
    double farePaid;
    bool active;

public:

    Ticket(
    int id = 0,
    Flight* f = NULL,
    Passenger* p = NULL,
    int seat = 0,
    double fare = 0
    );

    void display();
    int getTicketId();
    bool operator==(const Ticket& other);
    friend ostream& operator<<(ostream& out,
                               const Ticket& t);
};

#endif

