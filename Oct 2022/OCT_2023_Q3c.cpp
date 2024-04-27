/*Declare a class of vehicle. Derived classes are two whecler, three wheeler and four wheeler. Display the properties of each type of vehicle using member functions of class.*/
#include <iostream>
#include <cstring>
using namespace std;

class vehicle
{
public:
    char rto[20];
};

class twoWheeler : public vehicle
{
public:
    char model[20];

public:
    void getdetails()
    {
        cout << "\nEnter Two Wheeler Details:\n";
        cout << "Enter RTO No: ";
        cin >> rto;
        cin.ignore();

        cout << "Enter Model Name: ";
        cin >> model;
    }

    void display()
    {
        cout << "\nTwo Wheeler Details:\n";
        cout << "RTO No: " << rto << endl;
        cout << "Model Name: " << model << endl;
    }
};
class threeWheeler : public vehicle
{
public:
    char model[10];

public:
    void getdetails()
    {
        cout << "\nEnter Three Wheeler Details:\n";
        cout << "Enter RTO No: ";
        cin >> rto;
        cin.ignore();

        cout << "Enter Model Name: ";
        cin >> model;
    }

    void display()
    {
        cout << "\nThree Wheeler Details:\n";
        cout << "RTO No: " << rto << endl;
        cout << "Model Name: " << model << endl;
    }
};
class fourWheeler : public vehicle
{
public:
    char model[10];

public:
    void getdetails()
    {
        cout << "\nEnter Four Wheeler Details:\n";
        cout << "Enter RTO No: ";
        cin >> rto;
        cin.ignore();

        cout << "Enter Model Name: ";
        cin >> model;
    }

    void display()
    {
        cout << "\nFour Wheeler Details:\n";
        cout << "RTO No: " << rto << endl;
        cout << "Model Name: " << model << endl;
    }
};

int main()
{
    twoWheeler bike;
    threeWheeler autos;
    fourWheeler car;

    bike.getdetails();
    autos.getdetails();
    car.getdetails();

    bike.display();
    autos.display();
    car.display();

    return 0;
}