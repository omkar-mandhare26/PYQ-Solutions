/*Write a C++ program to use setfile ( ) and setiosflags ( ) manipulator.*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << setw(20) << setfill('*') << "Hello World" << endl;
    cout << setiosflags(ios::scientific | ios::uppercase | ios::fixed) << setprecision(2);
    cout << 123.456789 << endl;

    return 0;
}
