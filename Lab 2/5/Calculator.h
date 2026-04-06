//        ********** Semester 2 ***********
//        ********** LAB 2 TASK 5 **********

#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <iostream>
using namespace std;

// Create class Calculator
class Calculator
{
public:
    float num1;     // first number
    float num2;     // second number

    float add();        // declaration
    float subtract();   // declaration
    float multiply();   // declaration
    float divide();     // declaration
};

// Define functions outside the class

float Calculator::add()
{
    return num1 + num2;
}

float Calculator::subtract()
{
    return num1 - num2;
}

float Calculator::multiply()
{
    return num1 * num2;
}

float Calculator::divide()
{
    if (num2 != 0)
        return num1 / num2;
    else
    {
        cout << "Cannot divide by zero!" << endl;
        return 0;
    }
}

#endif
