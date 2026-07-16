/*             LAB 10 AND 11 
                 Task 1 — Basic Friend Function
Create a class Box having:
• Private data member length 
• A constructor to initialize length 
• Create a friend function displayLength() that accesses and displays 
the private member   */


#include<iostream>
using namespace std;

// i make the class
class Box
{
private:
    int length;

public:    // ta ky ma length ko access kar saku 
    Box(int l)
    {
    length = l;
    }
    
    friend void displayLength(Box b);  
};
void displayLength(Box b)
{
    cout<<"Length = "<<b.length<<endl;
}

int main()
{
    Box b1(15);
    displayLength(b1);
    return 0;
}
