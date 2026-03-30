//        ********** Semester 2 ***********
//        ********** LAB 1 TASK 3 **********
/* Modify your previous program to:
1. Use a pointer to a structure to store and access student details.
2. Dynamically assign values to the structure members using the 
pointer.
3. Use the pointer to call the displayStudentInfo() function */ 

#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string firstName;
    string lastName;
    int rollNumber;
    float marks;

    void displayStudentInfo()
    {
        cout<<"Full Name: "<<firstName<< " " <<lastName<<endl;
        cout<<"Marks: " <<marks<<endl;
    }
};

int main()
{
    Student s1;                         

    Student *ptr = &s1;                 // ptr is a pointer

    // Using pointer to put values (use -> instead of .)
    ptr->firstName = "Sara";            
    ptr->lastName = "Ahmed";
    ptr->rollNumber = 202;
    ptr->marks = 91.0;

    ptr->displayStudentInfo();          // calling function using pointer

    return 0;
}
