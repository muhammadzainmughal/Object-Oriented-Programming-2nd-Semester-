//        ********** Semester 2 ***********
//        ********** WEEK 7 TASK 1 **********
/* Composition */

#include<iostream>
#include "Calculator.h"
using namespace std;

int main()
{
    Calculator c1;
    c1.add(10, 5);
    c1.multiply(3, 7);
    c1.showPreviousResult();

    return 0;
}
