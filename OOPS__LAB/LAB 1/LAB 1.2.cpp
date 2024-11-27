#include <iostream>
using namespace std;
struct Buying
{
    int miners;
    int toasters;
    int fans;
    float net_bill;

    void getData()
    {
        cout << "enter no. of miners, toasters, fans" << endl;
        cin >> miners >> toasters >> fans;
    }

    void calcNetBill()
    {
        net_bill = (miners * 1500) - ((5 / 100) * (miners * 1500)) + (toasters * 200) - ((15 / 100) * (toasters * 200)) + (fans * 450) - ((10 / 100) * (fans * 450));
        cout << "bill with discount:" << net_bill << endl;
    }

    void calcEffBill()
    {
        cout << "bill with charge:" << net_bill + ((10 / 100) * net_bill);
    }
};

int main()
{
    struct Buying customer;
    customer.getData();
    customer.calcNetBill();
    customer.calcEffBill();
    return 0;
}
