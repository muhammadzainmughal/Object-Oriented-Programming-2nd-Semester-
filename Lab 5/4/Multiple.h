//        ********** Semester 2 ***********
//        ********** LAB 5 TASK 4 **********

#ifndef MULTIPLE_H
#define MULTIPLE_H
#include <iostream>
using namespace std;

    class Printer   // my first class 
{
public:
    void print_document();
};

     class Scanner  // phir nma ny class 2 bnayi 
{
public:
    void scan_document();
};
    // class 3
    
    class Photocopier : public Printer, public Scanner
{
public:
    void photocopy();
};

// I make 3 functions 

    void Printer::print_document()
{
    cout << "Printing document..." << endl;
}

   void Scanner::scan_document()
{
    cout<<"Scanning document..." << endl;
}

       void Photocopier::photocopy()
{
    print_document();
    scan_document();
    cout<<"Photocopy completed!" <<endl;
}

#endif
