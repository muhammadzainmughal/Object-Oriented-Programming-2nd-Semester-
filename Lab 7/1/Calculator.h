//        ********** Semester 2 ***********
//        ********** WEEK 7 TASK 1 **********
/* Composition */

#ifndef CALCULATOR_H
#define CALCULATOR_H

#include<iostream>
using namespace std;

class Display
{
private:
    double lastValue;
public:

    Display()
    {
    lastValue = 0;
    }

    void show(double value)
    {
    lastValue = value;
    cout<<"Result: " << lastValue << endl;
    }
    double getLastValue()
    {
    return lastValue;
    }
};

// Calculator Class
class Calculator
{
private:

    // Composition
    Display screen;

public:

    void add(double a, double b)
    {
    double result = a + b;
    screen.show(result);
    }

    void multiply(double a, double b)
    {
    double result = a * b;
    screen.show(result);
    }

    void showPreviousResult()
    {
    cout<<"Previous Result: "
    <<screen.getLastValue()
    <<endl;
    }
};

#endif
