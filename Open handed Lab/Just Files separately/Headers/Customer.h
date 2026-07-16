#ifndef CUSTOMER_H
#define CUSTOMER_H
#include<iostream>
using namespace std;

class Customer
{
private:
    int customerID;
    string customerName;
    bool rented;
public:
    Customer(
    int id=0,
    string name=""
    );

    void display();
    int getID();
    string getName();

    bool hasRental();
    void rentVehicle();
    void returnVehicle();
};

#endif
