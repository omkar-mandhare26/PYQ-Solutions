/*Design C++ class which contains function display(). Write a program to count number of times display() is called. (use static data member).*/
#include <iostream>
using namespace std;

class test
{
public:
    static int countVar;

public:
    void display() { countVar++; }

    void displayCount()
    {
        cout << "display() function was called " << countVar << " times" << endl;
    }
};

int test::countVar = 0;

int main()
{
    test t;
    t.display();
    t.display();
    t.display();
    t.displayCount();

    return 0;
}