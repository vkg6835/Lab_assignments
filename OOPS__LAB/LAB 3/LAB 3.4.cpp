#include <iostream> // experiment 9
using namespace std;

class Data
{
    // int math, sum, science;
    float price;
    string name;

public:
    Data() {}
    void SetData(string n, int p)
    {
        name = n;
        price = p;
    }
    friend void CheapestBook(Data m[], int size);
};

void CheapestBook(Data m[], int size)
{
    int h = m[0].price, j = 0;
    for (int i = 0; i < size - 1; i++)
    {
        if (m[i].price > m[i + 1].price)
        {
            h = m[i + 1].price;
            j = i + 1;
        }
    }
    cout << "cheapest book  price: " << h << "rs" << "   book name :" << m[j].name << endl; // here h is used for storing cheapest book
}

int main()
{
    Data m[3];
    m[0].SetData("Book1", 9);
    m[1].SetData("Book3", 10);
    m[2].SetData("Book2", 8);
    CheapestBook(m, 3);
    return 0;
}