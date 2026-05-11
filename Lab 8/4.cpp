//        ********** Semester 2 ***********
//        ********** WEEK 8 TASK 4 **********
/* Shape Area using Virtual Functions */

#include<iostream>
using namespace std;
class Shape
{
public:

    virtual double area()
    {
    return 0;
    }
};

class Rectangle : public Shape
{
private:
    double length;
    double width;
public:

    Rectangle(double l, double w)
    {
    length = l;
    width = w;
    }

    double area()
    {
    return length * width;
    }
};

class Circle : public Shape
{
private:
    double radius;
public:

    Circle(double r)
    {
    radius = r;
    }

    double area()
    {
    return 3.14 * radius * radius;
    }
};

int main()
{
    Shape* s;
    Rectangle r1(5, 4);

    Circle c1(3);
    s = &r1;
    
    cout << "Rectangle Area: " << s->area() << endl;
    s = &c1;

    cout << "Circle Area: " << s->area() << endl;
    return 0;
}
