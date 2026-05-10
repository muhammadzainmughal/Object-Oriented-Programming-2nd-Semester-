//        ********** Semester 2 ***********
//        ********** WEEK 6 TASK 4 **********
/* Device and Sensor System */

#ifndef SENSOR_H
#define SENSOR_H

#include<iostream>
#include<string>
using namespace std;

// Base Class
class Device
{
protected:

    string deviceName;
    int deviceID;
    int* data;

public:

    Device(string dn, int id, int value)
    {
    deviceName = dn;
    deviceID = id;
    data = new int;
    *data = value;
    cout << "Device Constructor Called" << endl;
    }
    ~Device()
    {
    delete data;
    cout<<"Device Destructor Called" << endl;
    }
};

class Sensor : public Device
{
private:
    string sensorType;
    float* sensorValue;
public:

    Sensor(string dn, int id, int value,
string st, float sv)
    : Device(dn, id, value)
    {
        sensorType = st;

        sensorValue = new float;
        *sensorValue = sv;
    cout<<"Sensor Constructor Called" << endl;
    }
    ~Sensor()
    {
    delete sensorValue;
    cout<< "Sensor Destructor Called" << endl;
    }

    void display()
    {
    cout<<"\nDevice Name: "<<deviceName<<endl;
    cout<< "Device ID: " <<deviceID<<endl;
    cout<<"Data: "<< *data << endl;
    cout<<"Sensor Type: "<<sensorType<<endl;
     cout<<"Sensor Value: "<< *sensorValue<<endl;
    }
};

#endif
