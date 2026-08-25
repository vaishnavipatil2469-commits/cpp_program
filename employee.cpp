#include <iostream>
using namespace std;

class Employee
{
    int empID;
    string empName;
    float empSalary;

public:
    
    Employee()
    {
        empID = 0;
        empName = "Unknown";
        empSalary = 0;
    }

    Employee(int id, string name, float salary)
    {
        empID = id;
        empName = name;
        empSalary = salary;
    }

    
    Employee(const Employee &e)
    {
        empID = e.empID;
        empName = e.empName;
        empSalary = e.empSalary;
    }

    
    void display()
    {
        cout << "Employee ID: " << empID << endl;
        cout << "Employee Name: " << empName << endl;
        cout << "Employee Salary: " << empSalary << endl;
    }
};

int main()
{
    Employee e1;                      
    Employee e2(101, "Vaishnavi", 25000); 
    Employee e3(e2);                     

    cout << "Default Constructor:" << endl;
    e1.display();

    cout << "\nParameterized Constructor:" << endl;
    e2.display();

    cout << "\nCopy Constructor:" << endl;
    e3.display();

    return 0;
}
