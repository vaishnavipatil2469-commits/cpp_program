#include <iostream>
using namespace std;

class Rectangle
{
    float length, breadth;

public:
    // Default constructor
    Rectangle()
    {
        length = 0;
        breadth = 0;
    }

    // Parameterized constructor
    Rectangle(float l, float b)
    {
        length = l;
        breadth = b;
    }

    // Copy constructor
    Rectangle(const Rectangle &r)
    {
        length = r.length;
        breadth = r.breadth;
    }

    void display()
    {
        float area = length * breadth;

        cout << "Length = " << length << endl;
        cout << "Breadth = " << breadth << endl;
        cout << "Area = " << area << endl;
    }
};

int main()
{
    Rectangle r1;         
    Rectangle r2(10, 5);   
    Rectangle r3(r2);      

    cout << "Default Constructor:" << endl;
    r1.display();

    cout << "\nParameterized Constructor:" << endl;
    r2.display();

    cout << "\nCopy Constructor:" << endl;
    r3.display();

    return 0;
}