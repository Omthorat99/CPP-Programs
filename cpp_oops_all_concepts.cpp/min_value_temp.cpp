#include<iostream>
using namespace std;

class MinimumValue{
    public:

    int num1,num2;

    MinimumValue(){
        num1 = 25;
        num2 = 15;
    }

    void display(){
        cout<<"Both values : "<<num1<<" "<<num2<<endl;
    }

    virtual void show(){
        cout<<"Minimum Value"<<endl;
    }
};

class CompareMin : public MinimumValue{
    public :

    void show(){
        cout<<"Compare minimum "<<endl; 
    }
};

template<typename T>
T mina(T a,T b){
    return (a<b) ? a:b;
}

int main(){

    MinimumValue m;
    m.display();

    CompareMin c;
    MinimumValue *ptr = &c;
    ptr->show();

    cout<<"Smallest value : "<<mina(50,100)<<endl;

    return 0;
}