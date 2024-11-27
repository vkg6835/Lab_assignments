#include <iostream>
#include <cstring>
class Student
{
private:
    int admno;
    char name[20];
    float marksEng;
    float marksMaths;
    float marksSci;
    float total;

    void compute()
    {
        total = marksEng + marksMaths + marksSci;
    }

public:
    void readData()
    {
        std::cout << "Enter Admission Number: ";
        std::cin >> admno;
        std::cin.ignore();

        std::cout << "Enter Name (max 20 characters): ";
        std::cin.getline(name, 20);
        std::cout << "Enter Marks in English: ";
        std::cin >> marksEng;

        std::cout << "Enter Marks in Mathematics: ";
        std::cin >> marksMaths;

        std::cout << "Enter Marks in Science: ";
        std::cin >> marksSci;

        compute();
    }

    void showData() const
    {
        std::cout << "\nStudent Details:\n";
        std::cout << "Admission Number: " << admno << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Marks in English: " << marksEng << std::endl;
        std::cout << "Marks in Mathematics: " << marksMaths << std::endl;
        std::cout << "Marks in Science: " << marksSci << std::endl;
        std::cout << "Total Marks: " << total << std::endl;
    }
};

int main()
{
    Student student1;

    student1.readData();

    student1.showData();

    return 0;
}
