#include <iostream>
using namespace std;

class ShoppingCart
{
public:
    int itemCount, price;

    ShoppingCart()
    {
        itemCount = 3;
        price = 200;
    }

    void display()
    {
        cout << "Total cost : " <<itemCount*price <<endl;
    }

    virtual void show()
    {
        cout << "Cart" << endl;
    }
};

class OnlineCart : public ShoppingCart
{
public:
    void show()
    {
        cout << "Online Cart" << endl;
    }
};

template <typename T>
T sub(T a, T b)
{
    return a - b;
}

int main()
{

    ShoppingCart s;
    s.display();

    OnlineCart o;
    ShoppingCart *ptr = &o;
    ptr->show();

    cout << "sub : " << sub(10, 5) << endl;

    return 0;
}