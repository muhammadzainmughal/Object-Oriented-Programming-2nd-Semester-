//        ********** Semester 2 ***********
//        ********** LAB 2 TASK 4 **********
/* Modify your previous program to:
1. Use a pointer to a structure to store and access student details.
2. Dynamically assign values to the structure members using the 
pointer.
3. Use the pointer to call the displayStudentInfo() function */ 

#include "Temperature.h"

int main()
{
    Temperature t1;           // create object

    cout << "Enter temperature in Celsius: ";
    cin >> t1.celsius;        // store value

    t1.display();             // show converted value

    return 0;
}
