#include <iostream>
using namespace std;

class Fraction
{
private:
    int numerator;
    int denominator;

    int gcd(int a, int b)
    {
        while (b != 0)
        {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    void simplify()
    {
        int commonDivisor = gcd(numerator, denominator);
        numerator /= commonDivisor;
        denominator /= commonDivisor;
    }

public:
    Fraction(int num = 0, int denom = 1) : numerator(num), denominator(denom)
    {
        if (denominator == 0)
        {
            cout << "Denominator cannot be zero. Setting it to 1." << endl;
            denominator = 1;
        }
        simplify();
    }

    Fraction add(Fraction f)
    {

        int newNum = numerator * f.denominator + denominator * f.numerator;
        int newDenom = denominator * f.denominator;
        Fraction result(newNum, newDenom);
        result.simplify();
        return result;
    }

    void subtract(Fraction &f)
    {

        numerator = numerator * f.denominator - denominator * f.numerator;
        denominator = denominator * f.denominator;
        simplify();
    }

    void multiply(Fraction *f)
    {

        numerator *= f->numerator;
        denominator *= f->denominator;
        simplify();
    }

    void display() const
    {
        cout << "Fraction: " << numerator << "/" << denominator << endl;
    }
};

int main()
{

    Fraction f1(1, 2);
    Fraction f2(3, 4);

    cout << "Original Fractions:" << endl;
    f1.display();
    f2.display();

    Fraction sum = f1.add(f2);
    cout << "\nSum of fractions: ";
    sum.display();

    f1.subtract(f2);
    cout << "\nAfter subtracting the second fraction from the first: ";
    f1.display();

    f1.multiply(&f2);
    cout << "\nAfter multiplying the fractions: ";
    f1.display();

    return 0;
}
