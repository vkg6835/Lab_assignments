#include <iostream>
#include <cstring>
using namespace std;

struct Publication
{
    char title[50];
    float price;
    char author[50];

    void getData()
    {
        cout << "Enter the title of the publication: ";
        cin.getline(title, 50);
        cout << "Enter the price of the publication: ";
        cin >> price;
        cin.ignore();
        cout << "Enter the author's name: ";
        cin.getline(author, 50);
    }

    void displayData() const
    {
        cout << "Title: " << title << endl;
        cout << "Price: $" << price << endl;
        cout << "Author: " << author << endl;
    }
};

struct Book : public Publication
{
    int count;

    void getData()
    {
        Publication::getData();
        cout << "Enter the page count for the book: ";
        cin >> count;
        cin.ignore();
    }

    void displayData() const
    {
        Publication::displayData();
        cout << "Page count: " << count << " pages" << endl;
    }
};

struct Ebook : public Publication
{
    float time;

    void getData()
    {
        Publication::getData();
        cout << "Enter the playing time for the ebook (in hours): ";
        cin >> time;
        cin.ignore();
    }

    void displayData() const
    {
        Publication::displayData();
        cout << "Playing time: " << time << " hours" << endl;
    }
};

int main()
{

    Book book1;
    Ebook ebook1;

    cout << "Enter details for the Book:\n";
    book1.getData();

    cout << "\nEnter details for the Ebook:\n";
    ebook1.getData();

    cout << "\nBook Details:\n";
    book1.displayData();

    cout << "\nEbook Details:\n";
    ebook1.displayData();

    return 0;
}
