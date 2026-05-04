#include <iostream>
using namespace std;

class Multiplication
{
public:
    int num1, num2;

    Multiplication()
    {
        num1 = 5;
        num2 = 4;
    }

    void display()
    {
        cout << "product : " << num1 * num2 << endl;
    }

    virtual void show()
    {
        cout << "Multiplication" << endl;
    }
};

class Mathoperations : public Multiplication
{
public:
    void show()
    {
        cout << "Math Operation" << endl;
    }
};

template <typename T>
T mul(T a, T b)
{

    return a * b;
}

int main()
{

    Multiplication m;
    m.display();

    Mathoperations a;
    Multiplication *ptr = &a;
    ptr->show();

    cout << "mul : " << mul(2, 2) << endl;

    return 0;
}