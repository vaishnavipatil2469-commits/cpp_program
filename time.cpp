#include <iostream>
using namespace std;

class Time
{
    int h1, m1, s1;
    int h2, m2, s2;
    int h, m, s;

public:
    void getData()
    {
        cout << "Enter first time (hour minute second): ";
        cin >> h1 >> m1 >> s1;

        cout << "Enter second time (hour minute second): ";
        cin >> h2 >> m2 >> s2;
    }

    void addition()
    {
        s = s1 + s2;
        m = m1 + m2 + s / 60;
        s = s % 60;
        h = h1 + h2 + m / 60;
        m = m % 60;

        cout << "Addition = "
             << h << ":" << m << ":" << s << endl;
    }

    void subtraction()
    {
        s = s1 - s2;
        m = m1 - m2;
        h = h1 - h2;

        if (s < 0)
        {
            s = s + 60;
            m--;
        }

        if (m < 0)
        {
            m = m + 60;
            h--;
        }

        cout << "Subtraction = "
             << h << ":" << m << ":" << s << endl;
    }
};

int main()
{
    Time t;

    t.getData();
    t.addition();
    t.subtraction();

    return 0;
}