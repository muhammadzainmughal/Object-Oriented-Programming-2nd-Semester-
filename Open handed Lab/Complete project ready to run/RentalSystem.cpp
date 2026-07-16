#include<iostream>
#include "RentalSystem.h"
using namespace std;
void RentalSystem::addVehicle()
{
    int type;

    cout<<"\n1. Car";
    cout<<"\n2. Motorbike";
    cout<<"\n3. Truck";

    cout<<"\nChoose: ";
    cin>>type;

    string model;
    double rate;
    cout<<"Model: ";
    cin>>model;
    cout<<"Daily Rate: ";
    cin>>rate;

    if(type==1)
    {
    int seats;
    cout<<"Seats: ";
    cin>>seats;

    vehicles.push_back(
    new Car(model,rate,seats));
    }

    else if(type==2)
    {
    int cc;
    cout<<"Engine CC: ";
    cin>>cc;
    vehicles.push_back(
    new Motorbike(model,rate,cc));
    }

    else if(type==3)
    {
    double payload;
    cout<<"Payload: ";
    cin>>payload;

    vehicles.push_back(
    new Truck(model,rate,payload));
    }
    cout<<"Vehicle Added"<<endl;
}

void RentalSystem::registerCustomer()
{
    int id;
    string name;
    
    cout<<"Customer ID: ";
    cin>>id;
    cout<<"Customer Name: ";
    cin>>name;
    
    customers.push_back(
    new Customer(id,name));
cout<<"Customer Registered"<<endl;
}

void RentalSystem::rentVehicle()
{
    if(vehicles.size()==0)
    {
    cout<<"No Vehicles"<<endl;
    return;
    }

    if(customers.size()==0)
    {
    cout<<"No Customers"<<endl;
    return;
    }
    cout<<"\nVehicles"<<endl;

    int i;
    for(i=0;i<vehicles.size();i++)
    {
    cout<<i+1<<". ";
    vehicles[i]->display();
    }
    
    int v;
    cout<<"Select Vehicle: ";
    cin>>v;
    v--;

    cout<<"\nCustomers"<<endl;
    for(i=0;i<customers.size();i++)
    {
    cout<<i+1<<". ";
    customers[i]->display();
    }

    int c;
    cout<<"Select Customer: ";
    cin>>c;
    c--;
    
    int days;
    cout<<"Days: ";
    cin>>days;

    rentals.push_back(
    new Rental(
    vehicles[v],
    customers[c],
    days));
    cout<<"Rental Successful"<<endl;
}

void RentalSystem::returnVehicle()
{
    if(rentals.size()==0)
    {
    cout<<"No Rentals"<<endl;
    return;
    }

    int i;
    cout<<"\nRentals"<<endl;
    for(i=0;i<rentals.size();i++)
    {
    cout<<i+1<<endl;
    rentals[i]->display();
    }

    int r;
    cout<<"Choose Rental: ";
    cin>>r;
    r--;
    rentals[r]->closeRental();
    cout<<"Vehicle Returned"<<endl;
}

void RentalSystem::summary()
{
    cout<<"\n===== VEHICLES ====="<<endl;
    int i;
    for(i=0;i<vehicles.size();i++)
    {
    vehicles[i]->display();
    }

    cout<<"\n===== CUSTOMERS ====="<<endl;
    for(i=0;i<customers.size();i++)
    {
    customers[i]->display();
    }

    cout<<"\n===== RENTALS ====="<<endl;
    for(i=0;i<rentals.size();i++)
    {
    rentals[i]->display();
    }
}

RentalSystem::~RentalSystem()
{
    int i;
    for(i=0;i<vehicles.size();i++)
        delete vehicles[i];
    for(i=0;i<customers.size();i++)
        delete customers[i];
    for(i=0;i<rentals.size();i++)
        delete rentals[i];
}
