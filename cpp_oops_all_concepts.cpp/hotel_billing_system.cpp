#include <iostream>
using namespace std;

class HotelBill
{
public:
    int days, rentPerDay;

    HotelBill()
    {
        days = 2;
        rentPerDay = 1000;
    }

    void display()
    {
        cout << "total bill : " << days * rentPerDay << endl;
    }

    virtual void show()
    {
        cout << "Hotel Bill" << endl;
    }
};

class LuxuryRoom : public HotelBill
{
public:
    void show()
    {
        cout << "Luxury Room Bill" << endl;
    }
};

template <typename T>
T maxs(T a, T b)
{
    return (a > b) ? a : b;
}

int main()
{

    HotelBill h;
    h.display();

    LuxuryRoom l;
    HotelBill *ptr = &l;
    ptr->show();

    cout << "Larger number : " << maxs(200,30) << endl;

    return 0;
}
