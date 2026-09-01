#include <iostream>
using namespace std;

class SavingsAccount
{
private:
    string acc_name;
    int acc_no;
    double balance;
    double interestRate;

public:
    // Constructor
    SavingsAccount(string name, int no, double bal, double rate)
    {
        acc_name = name;
        acc_no = no;
        balance = bal;
        interestRate = rate;
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

    void apply_interest()
    {
        double interest = balance * interestRate / 100;
        balance = balance + interest;
    }

    void display()
    {
        cout << "Account Name: " << acc_name << endl;
        cout << "Account No: " << acc_no << endl;
        cout << "Balance: " << balance << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};

int main()
{
    SavingsAccount s("Vaishnavi", 101, 10000, 5);

    s.deposit(2000);
    s.withdraw(1000);
    s.apply_interest();

    s.display();

    return 0;
}