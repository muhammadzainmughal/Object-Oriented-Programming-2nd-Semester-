/*          LAB NO.13
Task 4 — Calculator.cpp */


#include<iostream>
using namespace std;
template <typename T>
class Calculator
{
private:
    T a;
    T b;

public:

    Calculator(T x,T y)
    {
    a=x;
    b=y;
    }

    T add()     // Add ky lea
    { return a+b; }
    
    T subtract()  // minus ky lea
    {
    return a-b; }

    T multiply()  // multiply ky lea
    { return a*b;
    }
};

int main()
{
    Calculator<int> c1(20,10);

    cout<<"Integer Values"<<endl;
    cout<<"Addition = "<<c1.add()<<endl;
    cout<<"Subtraction = "<<c1.subtract()<<endl;
    cout<<"Multiplication = "<<c1.multiply()<<endl;

    cout<<endl;
    Calculator<double> c2(4.5,2.0);

    cout<<"Double Values"<<endl;
    cout<<"Addition = "<<c2.add()<<endl;
    cout<<"Subtraction = "<<c2.subtract()<<endl;
    cout<<"Multiplication = "<<c2.multiply()<<endl;

    return 0;
}
