/*Design C++ class which contains function count(). Write a program to count number of time count() is called. (Use static data member.)*/
#include <iostream>
using namespace std;

class test
{
public:
    static int countVar;

public:
    void count() { countVar++; }

    void display()
    {
        cout << "count() function was called " << countVar << " times" << endl;
    }
};

int test::countVar = 0;

int main()
{
    test t;
    t.count();
    t.count();
    t.count();
    t.display();

    return 0;
}