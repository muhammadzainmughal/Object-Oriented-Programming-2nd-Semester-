#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H

#include <iostream>
using namespace std;
class FlightFullException
{
public:
    void message()
    { cout<<"Flight is Full"<<endl; }
};

class InvalidCancellationException
{
public:
    void message()
    {
    cout<<"Invalid Cancellation"<<endl;
    }
};

#endif

