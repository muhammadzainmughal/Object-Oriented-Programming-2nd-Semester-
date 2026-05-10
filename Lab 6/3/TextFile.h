//        ********** Semester 2 ***********
//        ********** WEEK 6 TASK 3 **********
/* File Handling System */

#ifndef TEXTFILE_H
#define TEXTFILE_H

#include<iostream>
using namespace std;

class File
{
public:

    File()
    {
    cout<<"File Opened" << endl;
    }
    ~File()
    {
    cout<<"File Closed" << endl;
    }
};

// Derived Class
class TextFile : public File
{
public:

    TextFile()
    {
    cout<<"Text File Opened"<<endl;
    }
    ~TextFile()
    {
    cout<<"Text File Closed"<<endl;
    }
};

#endif
