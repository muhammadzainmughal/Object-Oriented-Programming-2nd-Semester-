//        ********** Semester 2 ***********
//        ********** WEEK 10 TASK 4 **********
/* Write and Read Student Details */

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
   
    ofstream fout("students.txt");
    fout << "Ali 101\n";
    fout << "Ahmed 102\n";
    fout << "Zain 103\n";

    fout.close();
    ifstream fin("students.txt");
    string name;
    int rollNo;

    cout<<"Student Details:\n\n";
    while(fin >> name >> rollNo)
    {
        cout<<"Name: "<< name<< " | Roll No: "<< rollNo << endl;
    }

    fin.close();

    return 0;
}
