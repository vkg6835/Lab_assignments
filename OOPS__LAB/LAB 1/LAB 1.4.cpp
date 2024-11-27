#include <iostream>
using namespace std;

struct Customers
{
    char name[20];
    int no_of_calls;
    void getData()
    {
        cout << "enter name of customer" << endl;
        cin >> name;
        cout << "enter no of calls" << endl;
        cin >> no_of_calls;
    }
    void displayBill()
    {
        if (no_of_calls < 100)
        {
            cout << (200 / 100) * no_of_calls;
        }

        else if (no_of_calls == 100)
        {
            cout << "200";
        }
        else if (100 > no_of_calls <= 150)
        {
            cout << 200 + no_of_calls * 0.60;
        }
        else if (150 > no_of_calls <= 200)
        {

            cout << 200 + 50 * 0.60 + no_of_calls * 0.50;
        }
        else if (no_of_calls > 200)
        {

            cout << 200 + 50 * 0.60 + 50 * 0.50 + 0.40 * no_of_calls;
        }
    }
};

int main()
{
    struct Customers c1;
    c1.getData();
    c1.displayBill();
    return 0;
}