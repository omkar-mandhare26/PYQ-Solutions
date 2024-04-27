/*Write a C++ program to calculate square and cube of integer number by using inline function.*/
#include <iostream>
using namespace std;

inline int square(int n) { return n * n; }
inline int cube(int n) { return n * n * n; }

int main()
{
    int n = 5;
    cout << "Square of " << n << ": " << square(n) << endl;
    cout << "Cube of " << n << ": " << cube(n) << endl;
    return 0;
}