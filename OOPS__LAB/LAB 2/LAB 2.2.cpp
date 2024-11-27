#include <iostream>
using namespace std;

class Book
{
private:
    int day;
    int month;
    int year;

public:
    void getIssuedDate()
    {
        cout << "enter day, month and year" << endl;
        cin >> day >> month >> year;

        cout << "issued date:" << day << "-" << month << "-" << year << endl;
    }
    void displayDueDate();
};
void Book ::displayDueDate()
{

    cout << "due date:" << (day + 15) << "-" << month << "-" << year << endl;
}

int main()
{
    Book student;
    student.getIssuedDate();
    student.displayDueDate();
    return 0;
}