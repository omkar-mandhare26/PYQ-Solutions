/*Write a C++ program to create a class customer which contains data members as C_id, C_name, C_Salary. Write member functions to accept and display customer information, also display information of customer having maximum salary.*/

#include <iostream>
using namespace std;

class customer
{
public:
    int c_id, c_salary;
    char c_name[50];

public:
    void accept()
    {
        cout << "\nEnter Customer ID: ";
        cin >> c_id;

        cout << "Enter Customer Name: ";
        cin >> c_name;

        cout << "Enter Customer Salary: ";
        cin >> c_salary;
    }

    void display()
    {
        cout << "Customer ID: " << c_id << endl;
        cout << "Customer Name: " << c_name << endl;
        cout << "Customer Salary: " << c_salary << "\n\n";
    }

    void maxSalary(customer *objects, int n)
    {
        int i, max = objects[0].c_salary, k = 0;
        for (i = 1; i < n; i++)
            if (max < objects[i].c_salary)
                k = i;

        cout << "Customer with Maximum Salary: \n";
        objects[k].display();
    }
};

int main()
{
    int i, n;
    cout << "Enter No of Customer: ";
    cin >> n;
    customer *c = new customer[n];

    for (i = 0; i < n; i++)
        c[i].accept();

    cout << "\nCustomer Details: \n";
    for (i = 0; i < n; i++)
        c[i].display();

    c[0].maxSalary(c, n);

    return 0;
}