#include<iostream>
using namespace std;

class Person{
    public:
    virtual void role(){
        cout<<"Peron Role"<<endl;

    }

};

class Teacher : public Person{
    public:
    void role(){
        cout<<"I am a Teacher"<<endl;
    }
};

class Student : public Person{
    public:
    void role(){
        cout<<"I am a Student"<<endl;

    }
};

int main(){

    Person *p;

    Teacher t;
    Student s;

    p =&t;
    p->role();

    p =&s;
    p->role();

    return 0;

    
}