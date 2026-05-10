//        ********** Semester 2 ***********
//        ********** WEEK 4 TASK 3 **********
/* Constructor Overloading - Rectangle */

#include<iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
    // Default Constructor
    Rectangle r1;

    // Parameterized Constructor
    Rectangle r2(5, 4);

    // Single Parameter Constructor
    Rectangle r3(6);

    cout << "\nRectangle 1\n";
    r1.display();

    cout << "\nRectangle 2\n";
    r2.display();

    cout << "\nRectangle 3\n";
    r3.display();

    return 0;
}
