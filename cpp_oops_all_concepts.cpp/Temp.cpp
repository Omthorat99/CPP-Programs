#include <iostream>
using namespace std;

class Temperature
{
public:
    float celsius;

    Temperature()
    {
        celsius = 30;
    }

    void display()
    {
        cout << "Celsius to Fahrenheit : " << (celsius * 1.8) + 32<<endl;
    }

    virtual void show()
    {
        cout << "Temperature" << endl;
    }
};

class Weather : public Temperature
{
public:
    void show()
    {
        cout << "Weather Report" << endl;
    }
};

template <typename T>
T add(T a, T b)
{
    return a + b;
}

int main()
{

    Temperature t;
    t.display();

    Weather w;
    Temperature *ptr = &w;
    ptr->show();

    cout << "Addition of two number " << add(5, 5) << endl;

    return 0;
}