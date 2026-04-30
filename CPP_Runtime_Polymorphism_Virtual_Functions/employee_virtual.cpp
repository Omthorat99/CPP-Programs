#include<iostream>
using namespace std;

class Employee{
    public:
    virtual void salary(){
        cout<<"Base Employee salary"<<endl;
    }

};

class Manager : public Employee{
    public:
    void salary(){
        cout<<"Manager Salary = 80000"<<endl;
    }
};

class Developer : public Employee{
    public:
    void salary(){
        cout<<"Devloper salart = 60000"<<endl;
    }
};

int main(){
    Employee *e;

    Manager m;
    Developer d;

    e= &m;
    e->salary();

    e=&d;
    e->salary();

    return 0;
}
