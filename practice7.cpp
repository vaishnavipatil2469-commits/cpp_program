#include <iostream>
using namespace std;

// Base Class
class Employee
{
protected:
    int employeeID;
    string employeeName;
    string department;

public:
    void getEmployeeDetails()
    {
        cout << "Enter Employee ID: ";
        cin >> employeeID;

        cout << "Enter Employee Name: ";
        cin >> employeeName;

        cout << "Enter Department: ";
        cin >> department;
    }

    void displayEmployeeDetails()
    {
        cout << "\nEmployee ID   : " << employeeID;
        cout << "\nEmployee Name : " << employeeName;
        cout << "\nDepartment    : " << department;
    }
};

class TeachingStaff : public Employee
{
private:
    string subject;
    string qualification;

public:
    void getTeachingDetails()
    {
        getEmployeeDetails();

        cout << "Enter Subject: ";
        cin >> subject;

        cout << "Enter Qualification: ";
        cin >> qualification;
    }

    void displayTeachingDetails()
    {
        cout << "\n\n--- Teaching Staff Details ---";
        displayEmployeeDetails();

        cout << "\nSubject       : " << subject;
        cout << "\nQualification : " << qualification;
    }
};

class NonTeachingStaff : public Employee
{
private:
    string designation;
    float workingHours;

public:
    void getNonTeachingDetails()
    {
        getEmployeeDetails();

        cout << "Enter Designation: ";
        cin >> designation;

        cout << "Enter Working Hours: ";
        cin >> workingHours;
    }

    void displayNonTeachingDetails()
    {
        cout << "\n\n--- Non-Teaching Staff Details ---";
        displayEmployeeDetails();

        cout << "\nDesignation   : " << designation;
        cout << "\nWorking Hours : " << workingHours;
    }
};

// Main Function
int main()
{
    TeachingStaff teacher;
    NonTeachingStaff staff;

    cout << "===== TEACHING STAFF =====\n";
    teacher.getTeachingDetails();

    cout << "\n===== NON-TEACHING STAFF =====\n";
    staff.getNonTeachingDetails();

    cout << "\n\n===== EMPLOYEE DETAILS =====";

    teacher.displayTeachingDetails();
    staff.displayNonTeachingDetails();

    return 0;
}
