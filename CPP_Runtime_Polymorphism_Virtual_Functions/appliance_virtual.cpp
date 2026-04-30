#include<iostream>
using namespace std;

class Appliance{
     public:
    virtual void power(){

        cout<<"Appliances power consumption"<<endl;

    }
};

class fan : public Appliance{
    public:
    void power(){
        cout<<"Fan power = 75 watt"<<endl;
    }

};

class AC : public Appliance{
    public:
    void power(){
        cout<<"AC power 100watt"<<endl;
    }
};

int main(){

    Appliance *a;

    fan f;
    AC x;

    a= &f;
    a->power();

    a=&x;
    a->power();

    return 0;

}
