#include <iostream>
using namespace std;

class MinimumValue
{
public:
    int num1, num2;
    MinimumValue()
    {
        num1 = 25;
        num2 = 15;
    }

    void display()
    {
        cout << "Both value : " << num1 << " " << num2 << endl;
    }

    virtual void show()
    {
        cout << "Minimum Value" << endl;
    }
};

class CompareMin : public MinimumValue
{
public:
    void show()
    {
        cout << "Compare Minimum" << endl;
    }
};

template <typename T>
T mins(T a, T b)
{
    return (a < b) ? a : b;
}

int main()
{

    MinimumValue m;
    m.display();

    CompareMin c;
    MinimumValue *ptr = &c;
    ptr->show();

    cout << "Smaller value: " << mins(100, 10) << endl;

    return 0;
}