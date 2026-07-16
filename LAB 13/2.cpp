/*          LAB 13
Task 2 — findMin.cpp            */ 

#include<iostream>
using namespace std;
template <typename T>
T findMin(T a, T b)
{
    if(a < b)
    return a;
    else
    return b;
}

int main()
{
    cout<<findMin(20,10)<<endl;
    cout<<findMin(5.6,8.2)<<endl;
    cout<<findMin('A','Z')<<endl;

    return 0;
}
