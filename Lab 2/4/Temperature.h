//        ********** Semester 2 ***********
//        ********** LAB 2 TASK 4 **********

#ifndef TEMPERATURE_H
#define TEMPERATURE_H

#include <iostream>
using namespace std;

// Create class Temperature
class Temperature
{
public:
    float celsius;     // public data member

    float convert()    // function to convert Celsius to Fahrenheit
    {
        return (celsius * 9 / 5) + 32;
    }

    void display()     // function to display result
    {
        cout << "Temperature in Fahrenheit: " << convert() << endl;
    }
};

#endif
