#include <iostream>
using namespace std;

class sum
{
public:
    int num1, num2;

    sum()
    {
        num1 = 10;
        num2 = 20;
    }

    void display()
    {
        cout << "Addition is : " << num1 + num2 << endl;
    }

    virtual void show()
    {
        cout << "Sum" << endl;
    }
};

class Addition : public sum
{
public:
    void show()
    {
        cout << "Addition" << endl;
    }
};

template <typename T>
T add(T a, T b)
{
    return a+b;
}

int main()
{

    sum s;
    s.display();

    Addition a;
    sum *ptr = &a;
    ptr->show();

    cout << "addition of two number : " << add(5, 5) << endl;

    return 0;
}