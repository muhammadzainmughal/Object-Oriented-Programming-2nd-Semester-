//        ********** Semester 2 ***********
//        ********** WEEK 4 TASK 3 **********
/* Constructor Overloading - Rectangle */

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include<iostream>
using namespace std;

class Rectangle
{
private:

    float length;
    float width;

public:

    // Default Constructor
    Rectangle()
    {
        length = 1.0;
        width = 1.0;
    }

    // Parameterized Constructor
    Rectangle(float l, float w)
    {
        length = l;
        width = w;
    }

    // Single Parameter Constructor
    Rectangle(float side)
    {
        length = side;
        width = side;
    }

    // Area Function
    float area()
    {
        return length * width;
    }

    // Display Function
    void display()
    {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << area() << endl;
    }
};

#endif
