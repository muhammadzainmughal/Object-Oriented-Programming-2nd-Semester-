#include <iostream>
#include "Ticket.h"
using namespace std;

Ticket::Ticket(
    int id,
    Flight* f,
    Passenger* p,
    int seat,
    double fare
)
{
    ticketId = id;
    flight = f;
    passenger = p;
    seatNumber = seat;
    farePaid = fare;
    active = true;
}

void Ticket::display()
{
    cout<<"Ticket ID: "<<ticketId<<endl;
    cout<<"Seat Number: "<<seatNumber<<endl;
    cout<<"Fare Paid: " <<farePaid<<endl;
}

int Ticket::getTicketId()
{
    return ticketId;
}


bool Ticket::operator==(const Ticket& other)
{
return ticketId == other.ticketId;
}


ostream& operator<<(ostream& out, const Ticket& t)
{
    out<<"Ticket ID: " << t.ticketId;
    return out;
}
