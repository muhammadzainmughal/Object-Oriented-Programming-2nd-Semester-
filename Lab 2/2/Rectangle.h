//        ********** Semester 2 ***********
//        ********** LAB 2 TASK 2 **********

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include<iostream>
using namespace std;

class Rectangle {
	public:
	int length;
	int width;
	
	void setDimensions();
	int area();
	int perimeter ();
	
};

 void Rectangle :: setDimensions()
 {
 cout << "Enter Length: ";
 cin >> length;
 
 cout << "Enter Width: ";
 cin >> width; 
}

 int Rectangle :: area()
 { return length*width;
 }
 
 int Rectangle :: perimeter()
 { return 2* (length + width);
 }

#endif
