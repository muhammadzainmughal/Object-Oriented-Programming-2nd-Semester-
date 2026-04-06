//        ********** Semester 2 ***********
//        ********** LAB 2 TASK 2 **********
/* Modify your previous program to:
1. Use a pointer to a structure to store and access student details.
2. Dynamically assign values to the structure members using the 
pointer.
3. Use the pointer to call the displayStudentInfo() function */ 

#include "Rectangle.h"

int main ()
{
 	Rectangle r1;
 	r1.setDimensions();
 	
 	cout << "Area is : " << r1.area() <<endl;
 	cout << "Perimeter is : "<< r1.perimeter() << endl;
 	
 	return 0;
}
