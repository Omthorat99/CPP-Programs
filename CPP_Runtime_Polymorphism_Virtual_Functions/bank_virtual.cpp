#include<iostream>
using namespace std;

class Bank{
    public:
    virtual void interest(){
        cout<<"Bank interest"<<endl;

    }

};

class SBI : public Bank{
    public:
    void interest(){
        cout<<"SBI interest is 6 %"<<endl;

    }


};

class HDFC : public Bank{
    public:
    void interest(){
        cout<<"HDFC interest is 9%"<<endl;

    }
};

int main(){

    Bank *b;

    SBI s;
    HDFC h;

    b = &s;
    b->interest();

    b= &h;
    b->interest();

    return 0;
}