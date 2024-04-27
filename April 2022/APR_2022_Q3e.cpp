/*Write a C++ program to read contents of a text file and count number of characters. Words and lines in a file*/
#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

int main()
{
    char filePath[] = "file.txt";
    ifstream inputFile(filePath);

    int characterCount = 0;
    int wordCount = 0;
    int lineCount = 1;
    char ch;

    while (inputFile.get(ch))
    {
        if (ch != '\n')
            characterCount++;

        if (ch == '\n')
            lineCount++;

        if (isspace(ch))
            wordCount++;
    }
    inputFile.close();
    cout << "Number of characters: " << characterCount << endl;
    cout << "Number of words: " << wordCount << endl;
    cout << "Number of lines: " << lineCount << endl;

    return 0;
}