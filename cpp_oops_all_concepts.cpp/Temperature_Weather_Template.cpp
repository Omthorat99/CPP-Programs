#include<iostream>
using namespace std;

class Temperature{
    public:
    float celsius;

    Temperature(){
        celsius = 30;
    }

    void display(){
        cout<<"celsius to fahrenheit :"<<(celsius * 1.8)+32<<endl;
    }

    virtual void show(){
        cout<<"Temperature"<<endl;
    }
    
};

class weather : public Temperature{
    public:
    void show(){
        cout<<"Weather Report"<<endl;
    }
};

template <typename T>
T add(T a,T b){
    return a+b;
}

int main(){

    Temperature t;
    t.display();

    weather w;
    Temperature *ptr=&w;
    ptr->show();

    cout<<"Addition of two number : "<<add(5,4)<<endl;


    return 0;

}