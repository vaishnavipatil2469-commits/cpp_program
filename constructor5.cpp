#include <iostream>
using namespace std;

class Rectangle
{
private:
    float length;
    float width;

public:
   
    Rectangle()
    {
        length = 0;
        width = 0;
    }


    Rectangle(float l, float w)
    {
        length = l;
        width = w;
    }

    
    float area()
    {
        return length * width;
    }

    float perimeter()
    {
        return 2 * (length + width);
    }


    ~Rectangle()
    {
        cout << "Rectangle object destroyed." << endl;
    }
};

int main()
{
    float l, w;

    cout << "Enter length: ";
    cin >> l;

    cout << "Enter width: ";
    cin >> w;

    Rectangle r(l, w);

    cout << "\nArea = " << r.area() << endl;
    cout << "Perimeter = " << r.perimeter() << endl;

    return 0;
}
