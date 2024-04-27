/* Write a C++ program to copy the contents of a text file into another text file.*/
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream infile("file1.txt");
    ofstream outfile("file2.txt");
    char ch;
    while ((ch = infile.get()) != EOF)
        outfile.put(ch);
    return 0;
}