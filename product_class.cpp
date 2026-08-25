#include <iostream>
using namespace std;

class Product
{
    int prodID;
    string prodName;
    float price;

public:
    
    Product(int id, string name, float p)
    {
        prodID = id;
        prodName = name;
        price = p;
    }

    
    Product(const Product &p)
    {
        prodID = p.prodID;
        prodName = p.prodName;
        price = p.price;
    }

    void display()
    {
        int quantity;

        cout << "Product ID: " << prodID << endl;
        cout << "Product Name: " << prodName << endl;
        cout << "Price per item: " << price << endl;

        cout << "Enter quantity: ";
        cin >> quantity;

        cout << "Total Price = " << price * quantity << endl;
    }
};

int main()
{
    Product p1(101, "Rice", 50);

    cout << "Product Details:" << endl;
    p1.display();

    return 0;
}