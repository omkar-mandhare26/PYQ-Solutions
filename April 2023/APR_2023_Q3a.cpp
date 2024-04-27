/*Write a C++ program to create a class which contains two data members. Write member functions to accept, display and swap two entered numbers using call by reference.*/

#include <iostream>
using namespace std;

class numbers
{
public:
    int n1, n2;

public:
    void accept()
    {
        cout << "Enter Number 1: ";
        cin >> n1;
        cout << "Enter Number 2: ";
        cin >> n2;
    }

    void display()
    {
        cout << "Number 1: " << n1 << endl;
        cout << "Number 2: " << n2 << "\n\n";
    }

    void swap(int &a, int &b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
};

int main()
{
    numbers num;
    num.accept();

    cout << "Numbers Before Swap:\n";
    num.display();

    num.swap(num.n1, num.n2);
    cout << "Numbers Before Swap:\n";
    num.display();

    return 0;
}