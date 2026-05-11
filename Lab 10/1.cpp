//        ********** Semester 2 ***********
//        ********** WEEK 10 TASK 1 **********
/* File Handling */

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout("notes.txt");

    fout << "Object Oriented Programming\n";
    fout << "File Handling in C++\n";
    fout << "Reading and Writing Files\n";
    fout.close();
    
    ifstream fin("notes.txt");
    string line;
    cout<<"File Content:\n\n";

    while(getline(fin, line))
    {
    cout<<line<<endl;
    }

    fin.close();
    ofstream appendFile("notes.txt", ios::app);
    appendFile<<"Name: Zain Mughal\n";
    appendFile<<"Roll Number: 01\n";
    appendFile.close();

    cout << "\nData Appended Successfully";

    return 0;
}
