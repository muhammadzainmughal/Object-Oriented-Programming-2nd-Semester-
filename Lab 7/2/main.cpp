//        ********** Semester 2 ***********
//        ********** WEEK 7 TASK 2 **********
/* Aggregation */

#include<iostream>
#include "StudentCalculator.h"
using namespace std;

int main()
{
    // Shared Calculator
    Calculator myCalculator;

    // Students using same calculator
    Student s1(&myCalculator);
    Student s2(&myCalculator);
    cout<< "\n--- Student 1 ---\n";
    s1.solveAddition(8, 3);
    s1.solveMultiplication(4, 5);
    cout<< "\n--- Student 2 ---\n";
    s2.solveAddition(10, 2);
    s2.solveMultiplication(6, 7);

    return 0;
}
