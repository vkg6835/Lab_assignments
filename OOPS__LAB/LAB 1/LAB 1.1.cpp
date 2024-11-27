#include <iostream>
using namespace std;
struct Price
{
    int weight;
    void getWeight(void)
    {
        cout << "enter weight of letters";
        cin >> weight;
    }
    void displayPrice(void)
    {
        cout << "price to be paid" << endl;
        if (weight <= 50)
        {
            cout << weight * 0.05 << endl;
        }
        else if (50 > weight <= 150)
        {
            cout << (50 * 0.05) + (weight * 0.04);
        }
        else if (150 > weight <= 400)
        {
            cout << (50 * 0.05) + (150 * 0.04) + (weight * 0.025);
        }
        else if (weight > 400)
        {
            cout << (50 * 0.05) + (150 * 0.04) + (250 * 0.025) + (weight * 2.5);
        }
    }
};

int main()
{
    struct Price p1;
    p1.getWeight();
    p1.displayPrice();
}