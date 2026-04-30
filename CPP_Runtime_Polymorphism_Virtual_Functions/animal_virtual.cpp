#include<iostream>
using namespace std;

class Animal{
    public:
    virtual void sound(){
        cout<<"Animal make sound"<<endl;
    }

};

class Dog : public Animal{
    public:
    void sound(){
        cout<<"Dog barks "<<endl;
    }

};

class cat : public Animal{
    public:
    void sound(){
        cout<<"cat meows"<<endl;
    }
};

int main(){

    Animal *a;

    Dog d;
    cat c;

    a= &d;
    a->sound();

    a= &c;
    a->sound();

    return 0;

}