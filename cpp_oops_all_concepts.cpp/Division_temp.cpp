#include <iostream>
using namespace std;

class Division
{
public:
    int num1, num2;

    Division()
    {
        num1 = 20;
        num2 = 5;
    }

    void display()
    {
        cout << "div : " << num1 / num2 << endl;
    }

    virtual void show()
    {
        cout << "Division" << endl;
    }
};

class calculator : public Division
{
public:
    void show()
    {
        cout << "Calculator" << endl;
    }
};

template <typename T>
T divs(T a, T b)
{
    return a / b;
}

int main()
{

    Division d;
    d.display();

    calculator c;
    Division *ptr = &c;
    ptr->show();

    cout << "div : " << divs(10, 5) << endl;
}