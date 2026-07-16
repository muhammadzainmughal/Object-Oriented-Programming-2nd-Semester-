/*          LAB NO. 13
Task 1 — printTwice.cpp        */

#include<iostream>
#include<string>
using namespace std;
template <typename T>
void printTwice(T value)
{
    cout<<value<< endl;
    cout<<value<<endl;
}
int main()
{
    printTwice(10);
    printTwice(3.14);
    printTwice(string("Hello"));

    return 0;
}
