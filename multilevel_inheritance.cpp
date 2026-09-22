#include <iostream>
#include <string>
using namespace std;


class Student
{
protected:
    int rollNo;
    string name;

public:
    void getStudent()
    {
        cout << "Enter Student Name: ";
        cin >> name;

        cout << "Enter Roll Number: ";
        cin >> rollNo;
    }

    void displayStudent()
    {
        cout << "\nStudent Name : " << name;
        cout << "\nRoll Number  : " << rollNo;
    }
};

// Derived from Student
class StudentMarks : public Student
{
protected:
    float marks[5];

public:
    void getMarks()
    {
        cout << "\nEnter marks of 5 subjects:\n";

        for (int i = 0; i < 5; i++)
        {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    void displayMarks()
    {
        cout << "\n\nMarks:\n";

        for (int i = 0; i < 5; i++)
        {
            cout << "Subject " << i + 1 << " = " << marks[i] << endl;
        }
    }
};

class Result : public StudentMarks
{
private:
    float total;
    float percentage;

public:
    void calculate()
    {
        total = 0;

        for (int i = 0; i < 5; i++)
        {
            total += marks[i];
        }

        percentage = total / 5;
    }

    void displayResult()
    {
        displayStudent();
        displayMarks();

        cout << "\nTotal Marks = " << total;
        cout << "\nPercentage  = " << percentage << "%";

        if (percentage >= 40)
            cout << "\nResult      = PASS\n";
        else
            cout << "\nResult      = FAIL\n";
    }
};
