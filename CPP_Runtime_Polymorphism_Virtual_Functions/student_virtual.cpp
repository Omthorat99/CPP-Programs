#include<iostream>
using namespace std;

class Student{
    public:
    virtual void display(){
        cout<<"studets Details "<<endl;
    }
};

class UG : public Student{
    public:
    void display(){
        cout<<"undergraduate student"<<endl;
    }

};

class PG : public Student{
    public:
    void display(){
        cout<<"postgraduate student"<<endl;
    }
};

int main(){

    Student *s;

    UG u;
    PG p;

    s =&u;
    s->display();

    s=&p;
    s->display();

    return 0;
}