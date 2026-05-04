#include <iostream>
using namespace std;

class Electricity{
    public:
    int unit,rate;

    Electricity(){
        unit = 100;
        rate=5;
    }

    void display(){
        cout<<"Total bill = "<<unit*rate<<endl;
    }

    virtual void show(){
        cout<<"Electricity bill"<<endl;
    }
};

class Domestic : public Electricity{
    public:
    void show(){
        cout<<"Domestic Bill"<<endl;
    }
};

template<typename T>
T add(T a,T b){
    return a+b;
}

int main()
{
    Electricity e;
    e.display();

    Domestic d;
    Electricity*ptr = &d;
    ptr->show();

    cout<<"Add : "<<add(5,3)<<endl;

    return 0;
}