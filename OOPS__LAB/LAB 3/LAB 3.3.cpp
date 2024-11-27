#include <iostream> // experiment 8
using namespace std;
class Transaction
{
    double bank_balance = 189.12;
    float dep;
    float with;
    float a;

public:
    void deposit()
    {
        cout << "enter how much money to be deposited" << endl;
        cin >> dep;

        a = bank_balance + dep;

        cout << "amount after deposition" << a << endl;
    }

    void withdraw()
    {
        cout << "enter how much amount is withdrawn " << endl;

        cin >> with;
        cout << "balance after withdrawn " << (a - with);
    }
};

int main()
{
    Transaction t;
    t.deposit();

    t.withdraw();
    return 0;
}