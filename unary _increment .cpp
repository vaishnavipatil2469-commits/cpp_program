#include <iostream>
using namespace std;

class Number
{
    int n;

public:
    Number(int x)
    {
        n = x;
    }

    void operator++()
    {
        ++n;
    }

    void display()
    {
        cout << "Value = " << n;
    }
};

int main()
{
    Number obj(10);

    cout << "Before ++: ";
    obj.display();

    ++obj;

    cout << "\nAfter ++: ";
    obj.display();

    return 0;
}


unary 1
