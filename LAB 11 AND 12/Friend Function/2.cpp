/*            LAB 11 AND 12
Task 2 — Mathematical Operation Using Friend Function
Create a class Distance with:
• Feet 
• Inches 
Create a friend function addDistance() that adds two distance objects and 
displays the result.  */


#include<iostream>
using namespace std;

class Distance
{
private:
    int feet;
    int inches;

public:
    Distance(int f,int i)
    {
    feet=f;
    inches=i;
    }

    friend void addDistance(Distance d1,Distance d2);
};

void addDistance(Distance d1,Distance d2)
{
    int feet;
    int inches;

    feet=d1.feet+d2.feet;
    inches=d1.inches+d2.inches;

    if(inches>=12)
    {
    feet++;
    inches=inches-12;
    }
    cout<<"Total Distance = ";
    cout<<feet<<" Feet ";
    cout<<inches<<" Inches"<<endl;
}

int main()
{
    Distance d1(5,8);
    Distance d2(4,9);
    addDistance(d1,d2);
    
    return 0;
}
