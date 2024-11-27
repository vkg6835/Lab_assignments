#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void inputData(string &name, double &earning)
{
    cout << "Enter employee name: ";

    cin >> name;
    cout << "Enter employee earning: ";
    cin >> earning;
}

double computeBonus(double earning)
{
    if (earning >= 2000)
    {
        return 0.10 * earning;
    }
    return 0.0;
}

void display(const string &name, double bonus)
{
    cout << "Name: " << name << endl;

    cout << "Bonus: Rs. " << bonus << endl;
}

int main()
{
    string name;
    double earning, bonus;

    inputData(name, earning);

    bonus = computeBonus(earning);

    display(name, bonus);

    return 0;
}