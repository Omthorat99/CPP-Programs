#include <iostream>
using namespace std;

class TicketBooking
{
public:
    int ticket, price;

    TicketBooking()
    {
        ticket = 2;
        price = 100;
    }

    void display()
    {
        cout << "total cost : " << ticket * price << endl;
    }

    virtual void show()
    {
        cout << "Ticket Booking" << endl;
    }
};

class OnlineBooking : public TicketBooking
{
public:
    void show()
    {
        cout << "Online Booking" << endl;
    }
};

template <typename T>
T sub(T a, T b)
{
    return a - b;
}

int main()
{

    TicketBooking t;
    t.display();

    OnlineBooking o;
    TicketBooking *ptr = &o;
    ptr->show();

    cout << "Subtraction of two number : " << sub(10, 5) << endl;

    return 0;
}