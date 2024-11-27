#include <iostream>

class Data
{
private:
    int day;
    int month;
    int year;

public:
    Data()
    {
        day = 12;
        month = 3;
        year = 1993;
    }

    Data(int d = 12, int m = 10, int y = 2000)
    {
        day = d;
        month = m;
        year = y;
    }

    Data(const Data &other)
    {
        day = other.day;
        month = other.month;
        year = other.year;
    }

    void display() const
    {
        std::cout << "Date: " << day << "/" << month << "/" << year << std::endl;
    }
};

int main()
{

    // Data date1;
    // date1.display();

    Data date2(25, 12, 2021);
    date2.display();

    Data date3 = date2;
    date3.display();

    return 0;
}
