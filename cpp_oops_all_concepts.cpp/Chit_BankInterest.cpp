#include <iostream>
using namespace std;

class BankInterest
{
public:
    int principal, rate;

    BankInterest()
    {
        principal = 1000;
        rate = 5;
    }

    void display()
    {
        cout << "interest is: " << (principal * rate) / 100<<endl;
    }

    virtual void show()
    {
        cout << "Interest" << endl;
    }
};

class loan : public BankInterest
{
public:
    void show()
    {
        cout << "Loan Interest" << endl;
    }
};

template <typename T>

    T mul(T a, T b)
    {
        return a * b;
    }


int main()
{

    BankInterest b;
    b.display();

    loan l;
    BankInterest *ptr = &l;
    ptr->show();

    cout << "mul : " << mul(4, 6) << endl;

    return 0;
}