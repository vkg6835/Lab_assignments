
#include <iostream>
using namespace std;

class ClassA;
class ClassB;

float calculateMean(const ClassA &a, const ClassB &b);

class ClassA
{
private:
    float numA;

public:
    ClassA(float n) : numA(n) {}

    friend float calculateMean(const ClassA &a, const ClassB &b);
};

class ClassB
{
private:
    float numB;

public:
    ClassB(float n) : numB(n) {}

    friend float calculateMean(const ClassA &a, const ClassB &b);
};

float calculateMean(const ClassA &a, const ClassB &b)
{
    return (a.numA + b.numB) / 2;
}

int main()
{
    ClassA objA(10);
    ClassB objB(20);

    float mean = calculateMean(objA, objB);
    cout << "The mean of the two numbers is: " << mean << endl;

    return 0;
}