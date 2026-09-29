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

    Number operator+(Number obj)
    {
        Number temp(0);
        temp.n = n + obj.n;
        return temp;
    }

    void display()
    {
        cout << "Sum = " << n;
    }
};

int main()
{
    Number a(10), b(20);

    Number c = a + b;

    c.display();

    return 0;
}
