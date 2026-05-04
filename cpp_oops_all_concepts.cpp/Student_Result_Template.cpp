#include<iostream>
using namespace std;

class student{
    public:
    int marks1,marks2;


    student(){
        marks1=60;
        marks2=70;
    }

    void display(){
        cout<<"Total marks : "<<marks1+marks2<<endl;

    }

    virtual void show(){
        cout<<"student"<<endl;
    }

};

class Result : public student{
    public:
     void show(){
        cout<<"Result calculated"<<endl;

    }

};

template<typename T>
T sub(T a , T b){
    return a-b;
}

int main(){
    student s;
    s.display();

    Result r;
    student *ptr=&r;
    ptr->show();

    cout<<"sub : "<<sub(10,4)<<endl;

    return 0;
}
