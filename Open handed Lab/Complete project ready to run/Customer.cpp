#include<iostream>
#include "Customer.h"
using namespace std;

Customer::Customer(int id,string name)
{
    customerID=id;
    customerName=name;
    rented=false;
}

void Customer::display()
{
    cout<<"ID: "<<customerID<<endl;
    cout<<"Name: "<<customerName<<endl;
}

int Customer::getID()
{ return customerID; }

string Customer::getName()
{ return customerName;
}

bool Customer::hasRental()
{
return rented;
}

void Customer::rentVehicle()
{rented=true;
}

void Customer::returnVehicle()
{  rented=false; }
