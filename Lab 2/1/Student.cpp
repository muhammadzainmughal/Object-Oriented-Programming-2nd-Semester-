//        ********** Semester 2 ***********
//        ********** LAB 2 TASK 1 **********
/* Modify your previous program to:
1. Use a pointer to a structure to store and access student details.
2. Dynamically assign values to the structure members using the 
pointer.
3. Use the pointer to call the displayStudentInfo() function */

#include "Student.h"

int main()
{
	Student *s1 = new Student;   // pointer to object
	
	s1->getData();       // calling function using pointer
	s1->displayData();   // calling function using pointer
	
	delete s1;
	
	return 0;
}
