#include <iostream>
using namespace std;

class CheckingAccount
{
private:
    string acc_name;
    int acc_no;
    double balance;

public:
    // Constructor
    CheckingAccount(string name, int no, double bal)
    {
        acc_name = name;
        acc_no = no;
        balance = bal;
    }

    void deposit(double amount)
    {
        balance = balance + amount;
    }

    void withdraw(double amount)
    {
        if (amount <= balance)
            balance = balance - amount;
        else
            cout << "Insufficient balance!" << endl;
    }

    void display()
    {
        cout << "Account Name: " << acc_name << endl;
        cout << "Account No: " << acc_no << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    CheckingAccount c("Vaishnavi", 102, 5000);

    c.deposit(3000);
    c.withdraw(1500);

    c.display();

    return 0;
}