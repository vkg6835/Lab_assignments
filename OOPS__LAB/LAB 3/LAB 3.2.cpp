#include <iostream> //experiment no :6
using namespace std;
class Data
{
    int math, sum, science;
    string name;

public:
    Data() {}
    void SetData(string n, int m, int s)
    {
        name = n;
        math = m;
        science = s;
        sum = m + s;
    }
    friend void Highest(Data m[], int size);
};

void Highest(Data m[], int size)
{
    int h = m[0].sum, j = 0;
    for (int i = 0; i < size - 1; i++)
    {
        if (m[i].sum < m[i + 1].sum)
        {
            h = m[i + 1].sum;
            j = i + 1;
        }
    }
    cout << "The highest marks : " << h << ",Topper : " << m[j].name << endl; // here h is used for storing highest marks
}

int main()
{
    Data m[3];
    m[0].SetData("Pavan", 9, 9);
    m[1].SetData("Mohan", 10, 10);
    m[2].SetData("Vasu", 8, 9);
    Highest(m, 3);
    return 0;
}