#include <iostream>
using namespace std;

class Customers
{
    char name[20];
    int no_of_calls;

public:
    void getData()
    {
        cout << "enter name of customer" << endl;
        cin >> name;
        cout << "enter no of calls" << endl;
        cin >> no_of_calls;
    }
    void displayBill();
};

void Customers ::displayBill()
{
    if (no_of_calls < 100)
    {
        cout << "bill:" << (200 / 100) * no_of_calls << "rs";
    }

    else if (no_of_calls == 100)
    {
        cout << " bill: 200rs";
    }
    else if (no_of_calls <= 150)
    {
        cout << "bill:" << 200 + (no_of_calls - 100) * 0.60 << "rs";
    }
    else if (no_of_calls <= 200)
    {

        cout << "bill:" << 200 + 50 * 0.60 + (no_of_calls - 150) * 0.50 << "rs";
    }
    else if (no_of_calls > 200)
    {

        cout << "bill:" << 200 + 50 * 0.60 + 50 * 0.50 + 0.40 * (no_of_calls - 200) << "rs";
    }
}

int main()
{
    struct Customers c1;
    c1.getData();
    c1.displayBill();
    return 0;
}