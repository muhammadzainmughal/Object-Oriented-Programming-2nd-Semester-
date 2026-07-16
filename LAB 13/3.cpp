/*            LAB NO.13
Task 3 — Pair.cpp       
*/

#include<iostream>
#include<string>
using namespace std;
template <typename T>
class Pair
{
private:
    T first;
    T second;

public:

    Pair(T a,T b)
    {
    first=a;
    second=b;
    }
    T getFirst()
    { return first;  }

    T getSecond()
    { return second;
    }

    void display()
    {
    cout<<"First: "<<first<<endl;
    cout<<"Second: "<<second<<endl; }
};

int main()
{
    Pair<int> p1(10,20);
    Pair<double> p2(2.5,8.9);
    Pair<string> p3("Ali","Ahmed");

    p1.display();
    cout<<endl;
    p2.display();
    cout<<endl;
    p3.display();

    return 0;
}
