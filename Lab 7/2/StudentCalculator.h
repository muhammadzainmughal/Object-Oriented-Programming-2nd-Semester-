//        ********** Semester 2 ***********
//        ********** WEEK 7 TASK 2 **********
/* Aggregation */

#ifndef STUDENTCALCULATOR_H
#define STUDENTCALCULATOR_H

#include<iostream>
using namespace std;

class Calculator
{
public:

    double add(double a, double b)
    {
    return a + b;
    }

    double multiply(double a, double b)
    {
    return a * b;
    }
};

class Student
{
private:
    Calculator* calc;
public:

    Student(Calculator* c)
    {
    calc = c;
    }

    void solveAddition(double a, double b)
    {
    cout<<"Addition Result: "
    << calc->add(a, b)
    << endl;
    }

    void solveMultiplication(double a, double b)
    {
    cout<<"Multiplication Result: "
    << calc->multiply(a, b)
    << endl;
    }
};

#endif
