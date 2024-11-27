#include <iostream>
#include <string>

using namespace std;

class BankAccount
{
private:
    string Name;
    string acc_Number;
    string accountType;
    double balance;

public:
    void getData(const string &name, const string &number, const string &type, double initialBalance)
    {
        Name = name;
        acc_Number = number;
        accountType = type;
        balance = initialBalance;
    }

    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited Rs. " << amount << endl;
        }
        else
        {
            cout << "Not deposited" << endl;
        }
    }

    void withdraw(double amount)
    {
        if (amount > 0)
        {
            if (amount <= balance)
            {
                balance -= amount;
                cout << "Withdrew Rs. " << amount << endl;
            }
            else
            {
                cout << "Check balance" << endl;
            }
        }
        else
        {
            cout << "enter valid withdraw amount " << endl;
        }
    }

    void displayDetails() const
    {
        cout << "Account Holder Name: " << Name << endl;
        cout << "Account Number: " << acc_Number << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Balance: Rs. " << balance << endl;
    }
};

int main()
{
    BankAccount account;

    account.getData("Pavan", "123456789", "Saving account", 1000);

    account.displayDetails();

    account.deposit(500.00);

    account.withdraw(200.00);

    account.displayDetails();

    return 0;
}