#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num, temp, rem, sum = 0, digits = 0;

    cout << "Enter a number: ";
    cin >> num;

    temp = num;

    while (temp != 0)
    {
        digits++;
        temp = temp / 10;
    }

    temp = num;

    while (temp != 0)
    {
        rem = temp % 10;
        sum = sum + pow(rem, digits);
        temp = temp / 10;
    }

    if (sum == num)
        cout << "Armstrong Number";
    else
        cout << "Not an Armstrong Number";

    return 0;
}