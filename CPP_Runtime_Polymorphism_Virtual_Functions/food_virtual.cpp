#include<iostream>
using namespace std;

class Food{
    public:
    virtual void type(){
        cout<<"Types of food"<<endl;
    }
};

class Veg : public Food{
    public:
    void type(){
        cout<<"This is veg food"<<endl;

    }
};

class Nonveg : public Food{
    public:
    void type(){
        cout<<"This is non veg food"<<endl;
    }
};

int main(){

    Food *f;

    Veg v;
    Nonveg n;

    f = &v;
    f->type();

    f = &n;
    f->type();

    return 0;
}