/*Write a C++ program to calculate factorial of integer number by using inline function.*/
#include <iostream>
using namespace std;

inline int factorial(int n)
{
    if (n == 1 || n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    int n = 6;
    cout << "Factorial of " << n << ": " << factorial(n);
    return 0;
}