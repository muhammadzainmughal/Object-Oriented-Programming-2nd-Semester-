//        ********** Semester 2 ***********
//        ********* LAB 3 TASK **********

#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
using namespace std;

// Create class Product
class Product
{
private:
    string name;     // product name
    double price;    // product price
    int quantity;    // product quantity

public:
    // Setter functions
    void setName(string n);
    void setPrice(double p);
    void setQuantity(int q);

    // Getter functions
    string getName();
    double getPrice();
    int getQuantity();
};

// Define functions outside the class

void Product::setName(string n)
{
    if (n != "")
        name = n;
    else
        cout << "Invalid name! Name cannot be empty." << endl;
}

void Product::setPrice(double p)
{
    if (p > 0)
        price = p;
    else
        cout << "Invalid price! Must be greater than 0." << endl;
}

void Product::setQuantity(int q)
{
    if (q >= 0)
        quantity = q;
    else
        cout << "Invalid quantity! Cannot be negative." << endl;
}

// Getters

string Product::getName()
{
    return name;
}

double Product::getPrice()
{
    return price;
}

int Product::getQuantity()
{
    return quantity;
}

#endif
