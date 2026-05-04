#include <iostream>
using namespace std;

class Difference
{
public:
    int num1, num2;

    Difference()
    {
        num1 = 30;
        num2 = 10;
    }

    void display()
    {
        cout << "Subtraction result : " << num1 - num2 << endl;
    }

    virtual void show()
    {
        cout << "Difference" << endl;
    }
};

class Subtraction : public Difference
{
public:
    void show()
    {
        cout << "Subtractio" << endl;
    }
};

template <typename T>
T sub(T a, T b)
{
    return a - b;
}

int main()
{

    Difference d;
    d.display();

    Subtraction s;
    Difference *ptr = &s;
    ptr->show();

    cout << "subtraction of two number : " << sub(10, 5) << endl;

    return 0;
}