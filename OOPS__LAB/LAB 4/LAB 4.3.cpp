#include <iostream>
using namespace std;

class Person
{
    char name[20];
    int income;
    double tax_due;

public:
    void getData()
    {
        cout << "enter name of customer" << endl;
        cin >> name;
        cout << "enter income of customer" << endl;
        cin >> income;
    }
    void display_tax()
    {
        if (income < 100000)
        {
            cout << "tax to pay:" << "NILL";
        }

        else if (100001 > income and income <= 150000)
        {

            cout << "tax to pay:" << 0.1 * (100000) << "rs";
        }
        else if (151000 > income ^ income <= 200000)
        {

            cout << "tax to pay:" << 0.2 * (150000) << "rs";
        }
        else if (income > 200000)
        {

            cout << "tax to pay:" << 0.3 * (200000) << "rs";
        }
    }
};

int main()
{
    struct Person p;
    p.getData();
    p.display_tax();
    return 0;
}