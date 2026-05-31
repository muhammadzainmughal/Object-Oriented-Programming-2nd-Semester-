#include <iostream>
#include "Airline.h"

using namespace std;

int main()
{
    Airline airline;
    int choice;

    do
    {
        cout<< "\n******* Airline System *********\n";
        cout<< "1. Add Flight\n";
        cout<< "2. Show Flights\n";
        cout<< "3. Register Passenger\n";
        cout<< "4. Show Passengers\n";
        cout<< "5. Book Ticket\n";
        cout<< "6. Cancel Ticket\n";
        cout<< "7. Exit\n";

        cout<<"Enter Choice: ";
        cin>>choice;

        switch(choice)
     {
    case 1:
    airline.addFlight();
    break;

    case 2:
    airline.displayFlights();
    break;

    case 3:
    airline.registerPassenger();
    break;

    case 4:
    airline.displayPassengers();
    break;

    case 5:
    airline.bookTicket();
    break;

    case 6:
    airline.cancelTicket();
    break;

    case 7:
    cout << "Good Bye\n";
    break;

    default:
    cout<< "Invalid Choice\n"; }

    }while(choice != 7);

    return 0;
}
