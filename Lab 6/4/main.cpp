//        ********** Semester 2 ***********
//        ********** WEEK 6 TASK 4 **********
/* Device and Sensor System */

#include<iostream>
#include "Sensor.h"
using namespace std;

int main()
{
    Sensor* s1 = new Sensor(
    "Temperature Device",
    101,
    50,
    "Heat Sensor",
35.5
    );

    s1->display();
    cout<<endl;
    delete s1;
    return 0;
}
