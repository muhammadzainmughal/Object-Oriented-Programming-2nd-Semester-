#include <iostream>
#include <fstream>
#include <map>
#include <cstdlib>

#include "Airline.h"
#include "Exceptions.h"

using namespace std;

void Airline::addFlight()
{
    int type;

    cout<<"\n1. Domestic";
    cout<<"\n2. International";
    cout<<"\n3. Charter";

    cout<<"\nChoose Type: ";
    cin>>type;

    if(type<1 || type>3)
    {
        cout<<"Invalid Type"<<endl;
        return;
    }

    string fn,org,dest,date;
    int seats;

    cout<<"Flight Number: ";
    cin>>fn;

    cout<<"Origin: ";
    cin>>org;

    cout<<"Destination: ";
    cin>>dest;

    cout<<"Date (DD-MM-YYYY): ";
    cin>>date;

    cout<<"Seats: ";
    cin>>seats;

    if(seats<=0)
    {
        cout<<"Seats must be greater than zero"<<endl;
        return;
    }

    if(type==1)
    {
        double fare;

        cout<<"Fare: ";
        cin>>fare;

        flights.push_back(
        new DomesticFlight(
        fn,org,dest,date,seats,fare));
    }

    else if(type==2)
    {
        bool visa;
        double tax;

        cout<<"Visa Required (1/0): ";
        cin>>visa;

        cout<<"Tax: ";
        cin>>tax;

        flights.push_back(
        new InternationalFlight(
        fn,org,dest,date,seats,
        visa,tax));
    }

    else
    {
        string holder;

        cout<<"Contract Holder: ";
        cin>>holder;

        flights.push_back(
        new CharterFlight(
        fn,org,dest,date,seats,
        holder));
    }

    cout<<"Flight Added Successfully"<<endl;
}

void Airline::removeFlight()
{
    string flightNo;

    cout<<"Enter Flight Number: ";
    cin>>flightNo;

    for(int i=0;i<flights.size();i++)
    {
        if(flights[i]->getFlightNo()==flightNo)
        {
            delete flights[i];

            flights.erase(
            flights.begin()+i);

            cout<<"Flight Removed"<<endl;
            return;
        }
    }

    cout<<"Flight Not Found"<<endl;
}

void Airline::searchFlight()
{
    string flightNo;

    cout<<"Enter Flight Number: ";
    cin>>flightNo;

    for(int i=0;i<flights.size();i++)
    {
        if(flights[i]->getFlightNo()==flightNo)
        {
            flights[i]->display();
            return;
        }
    }

    cout<<"Flight Not Found"<<endl;
}

void Airline::displayFlights()
{
    if(flights.size()==0)
    {
        cout<<"No Flights Available"<<endl;
        return;
    }

    for(int i=0;i<flights.size();i++)
    {
        cout<<"\nFlight "<<i+1<<endl;
        flights[i]->display();
    }
}

void Airline::registerPassenger()
{
    int type,id;
    string name;

    cout<<"\n1. Economy";
    cout<<"\n2. Business";
    cout<<"\n3. First Class";

    cout<<"\nChoose Type: ";
    cin>>type;

    cout<<"Passenger ID: ";
    cin>>id;

    cout<<"Name: ";
    cin>>name;

    if(type==1)
    {
        passengers.push_back(
        new EconomyPassenger(id,name));
    }

    else if(type==2)
    {
        passengers.push_back(
        new BusinessPassenger(id,name));
    }

    else
    {
        passengers.push_back(
        new FirstClassPassenger(id,name));
    }

    cout<<"Passenger Registered"<<endl;
}

void Airline::removePassenger()
{
    int id;

    cout<<"Enter Passenger ID: ";
    cin>>id;

    for(int i=0;i<passengers.size();i++)
    {
        if(passengers[i]->getId()==id)
        {
            delete passengers[i];

            passengers.erase(
            passengers.begin()+i);

            cout<<"Passenger Removed"<<endl;
            return;
        }
    }

    cout<<"Passenger Not Found"<<endl;
}

void Airline::displayPassengers()
{
    for(int i=0;i<passengers.size();i++)
    {
        passengers[i]->display();
        cout<<endl;
    }
}

void Airline::bookTicket()
{
    if(flights.size()==0)
    {
        cout<<"No Flights Available"<<endl;
        return;
    }

    if(passengers.size()==0)
    {
        cout<<"No Passengers Available"<<endl;
        return;
    }

    displayFlights();

    int f;

    cout<<"Choose Flight: ";
    cin>>f;

    f--;

    if(f<0 || f>=flights.size())
    {
        cout<<"Invalid Flight"<<endl;
        return;
    }

    displayPassengers();

    int p;

    cout<<"Choose Passenger: ";
    cin>>p;

    p--;

    if(p<0 || p>=passengers.size())
    {
        cout<<"Invalid Passenger"<<endl;
        return;
    }

    if(flights[f]->getAvailableSeats()<=0)
    {
        cout<<"Flight Full"<<endl;
        return;
    }

    flights[f]->bookSeat();

    Ticket t(
    tickets.size()+1,
    flights[f],
    passengers[p],
    tickets.size()+1,
    flights[f]->calculateFare());

    tickets.push_back(t);

    revenueMap[
    flights[f]->getFlightNo()
    ] += flights[f]->calculateFare();

    cout<<"Ticket Booked"<<endl;
}

void Airline::cancelTicket()
{
    if(tickets.size()==0)
    {
        cout<<"No Tickets Available"<<endl;
        return;
    }

    tickets.pop_back();

    cout<<"Last Ticket Cancelled"<<endl;
}

void Airline::displayTickets()
{
    for(int i=0;i<tickets.size();i++)
    {
        tickets[i].display();
        cout<<endl;
    }
}

void Airline::bookingHistory()
{
    displayTickets();
}

void Airline::saveData()
{
    ofstream file("flights.txt");

    for(int i=0;i<flights.size();i++)
    {
        DomesticFlight* d =
        dynamic_cast<DomesticFlight*>(flights[i]);

        if(d != NULL)
        {
            file
            << d->getFlightNo() << ","
            << d->getOrigin() << ","
            << d->getDestination() << ","
            << d->getDepartureDate() << ","
            << d->getTotalSeats() << ","
            << d->getBaseFare()
            << endl;
        }
    }

    file.close();

    cout<<"Data Saved Successfully"<<endl;
}

void Airline::loadData()
{
    ifstream file("flights.txt");

    if(!file)
    {
        return;
    }

    string fn;
    string org;
    string dest;
    string date;
    string temp;

    while(getline(file,fn,','))
    {
        getline(file,org,',');
        getline(file,dest,',');
        getline(file,date,',');

        getline(file,temp,',');
        int seats = atoi(temp.c_str());

        getline(file,temp);
        double fare = atof(temp.c_str());

        flights.push_back(
        new DomesticFlight(
        fn,
        org,
        dest,
        date,
        seats,
        fare
        ));
    }

    file.close();
}
void Airline::reports()
{
    cout<<"\n===== REVENUE REPORT =====\n";

    map<string,double>::iterator it;

    for(it=revenueMap.begin();
        it!=revenueMap.end();
        it++)
    {
        cout<<"Flight: "
            <<it->first
            <<" Revenue: "
            <<it->second
            <<endl;
    }
}

Airline::~Airline()
{
    int i;

    for(i=0;i<flights.size();i++)
    {
        delete flights[i];
    }

    for(i=0;i<passengers.size();i++)
    {
        delete passengers[i];
    }
}
