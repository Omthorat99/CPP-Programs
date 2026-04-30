#include<iostream>
using namespace std;

class Vehical{
    public:
    virtual void showSpeed(){
    cout<<"Vehical speed"<<endl;
    }

};

class car : public Vehical{
    public:
    void showSpeed(){
        cout<<"car speed = 120 km/hrs"<<endl;

    }

};

class Bike : public Vehical{
    public:
    void showSpeed(){
        cout << "Bike speed  = 60 km/hr"<<endl;

    }
};


int main(){
    Vehical *v;

    car c;
    Bike b;

    v=&c;
    v->showSpeed();

    v=&b;
    v->showSpeed();

    return 0;
}