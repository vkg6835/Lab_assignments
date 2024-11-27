#include <iostream> //concept inline, default argument, const function and static function
using namespace std;
class Items
{
private:
    int miners;
    int toasters;
    int fans;
    float net_bill;

public:
    void getData(int m, int t, int f)
    {
        cout << "enter no. of miners, toasters, fans" << endl;
        cin >> miners >> toasters >> fans;
    }
    void calNetBill()
    {
        net_bill = (miners * 1500) - ((5 / 100) * (miners * 1500)) + (toasters * 200) - ((15 / 100) * (toasters * 200)) + (fans * 450) - ((10 / 100) * (fans * 450));
        cout << "net bill: " << net_bill << endl;
    }
    void calEffBill()
    {
        cout << "bill with charge:" << net_bill + ((10 / 100) * net_bill);
    }
};

int main()
{
    Items list;
    list.getData(1, 2, 3);
    list.calNetBill();
    list.calEffBill();
    return 0;
}