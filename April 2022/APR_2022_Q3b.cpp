/*Write a C++ program to create a class Book which contains data members as B–Id, B–Name, B–Author, B– publication. Write member functions to accept and display Book information also display count of books. (Use static data member to maintain count of books)*/
#include <iostream>
using namespace std;

class book
{
public:
    int b_id;
    char b_name[10], b_author[10], b_publications[10];
    static int count;

public:
    void accept()
    {
        cout << "\nEnter Book ID: ";
        cin >> b_id;

        cout << "Enter Book Name: ";
        cin >> b_name;

        cout << "Enter Book Author: ";
        cin >> b_author;

        cout << "Enter Book Publications: ";
        cin >> b_publications;

        count++;
    }

    void display()
    {
        cout << "Book ID: " << b_id << endl;
        cout << "Book Name: " << b_name << endl;
        cout << "Book Author: " << b_author << endl;
        cout << "Book Publications: " << b_publications << "\n\n";
    }

    void countDisplay()
    {
        cout << "Count of Books: " << count;
    }
};
int book::count = 0;

int main()
{
    book b1, b2, b3;
    b1.accept();
    b2.accept();
    b3.accept();

    b1.display();
    b2.display();
    b3.display();

    b1.countDisplay();

    return 0;
}