//        ********** Semester 2 ***********
//        ********** LAB 2 TASK 5 **********
/* Modify your previous program to:
1. Use a pointer to a structure to store and access student details.
2. Dynamically assign values to the structure members using the 
pointer.
3. Use the pointer to call the displayStudentInfo() function */ 

#include "Calculator.h"

int main()
{
    Calculator c1;     // create object
    int choice;

    cout << "Enter first number: ";
    cin >> c1.num1;

    cout << "Enter second number: ";
    cin >> c1.num2;

    cout << "\nChoose Operation:\n";
    cout << "1. Add\n";
    cout << "2. Subtract\n";
    cout << "3. Multiply\n";
    cout << "4. Divide\n";
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1)
        cout << "Result: " << c1.add() << endl;
    else if (choice == 2)
        cout << "Result: " << c1.subtract() << endl;
    else if (choice == 3)
        cout << "Result: " << c1.multiply() << endl;
    else if (choice == 4)
        cout << "Result: " << c1.divide() << endl;
    else
        cout << "Invalid choice!" << endl;

    return 0;
}
