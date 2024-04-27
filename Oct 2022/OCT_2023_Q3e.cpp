/*Write a C++ program to compare two strings using overload operator "==".*/
#include <iostream>
#include <cstring>
using namespace std;

class stringCmp
{
public:
    char str[20];

public:
    stringCmp(char *s) { strcpy(str, s); }

    int operator==(stringCmp &obj)
    {
        return strcmp(str, obj.str) == 0;
    }
};

int main()
{
    char str1[] = "Hello";
    char str2[] = "hello";

    stringCmp obj1(str1), obj2(str2);
    if (obj1 == obj2)
        cout << "Both Strings Are Same";
    else
        cout << "Both Strings Are Not Same";

    return 0;
}