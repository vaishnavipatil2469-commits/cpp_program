#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    void getPerson()
    {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Age: ";
        cin >> age;
    }
};

class Employee : public Person
{
protected:
    int empId;
    float salary;

public:
    void getEmployee()
    {
        cout << "Enter Employee ID: ";
        cin >> empId;

        cout << "Enter Salary: ";
        cin >> salary;
    }
};

class Manager : public Employee
{
private:
    string department;

public:
    void getManager()
    {
        cout << "Enter Department: ";
        cin >> department;
    }

    void display()
    {
        cout << "\n--- Manager Details ---\n";
        cout << "Name       : " << name << endl;
        cout << "Age        : " << age << endl;
        cout << "Employee ID: " << empId << endl;
        cout << "Salary     : " << salary << endl;
        cout << "Department : " << department << endl;
    }
};

int main()
{
    Manager m;

    m.getPerson();
    m.getEmployee();
    m.getManager();

    m.display();

    return 0;
}
