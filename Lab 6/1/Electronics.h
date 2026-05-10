//        ********** Semester 2 ***********
//        ********** WEEK 6 TASK 1 **********
/* Online Shopping System */

#ifndef ELECTRONICS_H
#define ELECTRONICS_H

#include<iostream>
#include<string>
using namespace std;


class Product
{
protected:

    string name;
    double price;

public:

    Product(string n, double p)
    {
        name = n;
        price = p;
        cout << "Product Constructor Called" << endl;
    }

    void displayProduct()
    {
        cout<<"Product Name: "<<name<<endl;
        cout <<"Product Price: " <<price<<endl;
    }
};

class Electronics : public Product
{
private:
    int warrantyYears;
public:
    Electronics(string n, double p, int w)
        : Product(n, p)
    {
    warrantyYears = w;
    cout<<"Electronics Constructor Called" << endl;
    }

    void displayElectronics()
    {
    displayProduct();
    cout<<"Warranty Years: "<<warrantyYears<<endl;
    }
};

#endif
