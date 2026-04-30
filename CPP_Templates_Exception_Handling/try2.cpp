#include<iostream>
using namespace std;

class Person{
    public:
    virtual void role(){
        cout<<"Role of the person : "<<endl;
    }

};

class Teacher : public Person{
    public:
    void role(){
        cout<<"Its a teacher "<<endl;
    }
};

class Student : public Person{
    public:
    void role(){
        cout<<"Its a student "<<endl;

    }
};

int main(){
    Person *p;

    Teacher t;
    Student s;

    p = &t;
    p->role();

    p =&s;
    p->role();

    return 0;


}