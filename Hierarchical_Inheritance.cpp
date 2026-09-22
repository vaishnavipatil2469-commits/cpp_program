#include <iostream>
using namespace std;

// Base class
class Library
{
protected:
    string name;

public:
    void getLibrary()
    {
        cout << "Enter Library Name: ";
        cin >> name;
    }
};

// Derived class 1
class Book : public Library
{
public:
    void displayBook()
    {
        cout << "\nBook is available in " << name << " Library." << endl;
    }
};

// Derived class 2
class Magazine : public Library
{
public:
    void displayMagazine()
    {
        cout << "Magazine is available in " << name << " Library." << endl;
    }
};

int main()
{
    Book b;
    Magazine m;

    cout << "===== Hierarchical Inheritance =====" << endl;

    b.getLibrary();
    b.displayBook();

    m.getLibrary();
    m.displayMagazine();

    return 0;
}
