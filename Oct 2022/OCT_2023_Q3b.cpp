/*Write a program to calculate area and circumference of a circle using inline function.*/
#include <iostream>
using namespace std;

inline float area(int r) { return 3.14 * r * r; }
inline float circumference(int r) { return 2 * 3.14 * r; }

int main()
{
    int r = 5;
    cout << "Area of " << r << ": " << area(r) << endl;
    cout << "Circumference of " << r << ": " << circumference(r) << endl;
    return 0;
}