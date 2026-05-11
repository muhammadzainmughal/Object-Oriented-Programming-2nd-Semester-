//        ********** Semester 2 ***********
//        ********** WEEK 8 TASK 1 **********
/* Function Overloading */

#include<iostream>
using namespace std;

class Calculator{
public:

    int add(int a, int b)
    {
    return a + b;
    }

    double add(double a, double b)
    {
    return a + b;
    }

    int add(int a, int b, int c)
    {
    return a + b + c;
    }
};

int main()
{
    Calculator c1;

    cout<<"Addition of 2 Integers: "<< c1.add(5, 3) << endl;
    cout<<"Addition of 2 Doubles: " <<c1.add(5.5, 2.5) <<endl;
    cout<< "Addition of 3 Integers: " << c1.add(2, 4, 6) <<endl;

    return 0;
}
