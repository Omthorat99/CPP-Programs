#include<iostream>
using namespace std;

class EmployeeBonus{
    public:
    int salary , bonus;

    EmployeeBonus(){
        salary = 20000;
        bonus = 3000;
    }

    void display(){
        cout<<"total salary : "<<salary + bonus<<endl;

    }
    virtual void show(){
        cout<<"EmployeeBonus"<<endl;
    }
};

class ManagerBonus : public EmployeeBonus{
    public:
    void show(){
        cout<<"Manager Bonus"<<endl;
    }

};

template<typename T>
T mins(T a,T b){
    return (a<b) ? a:b;
}

int main(){
    EmployeeBonus e;
    e.display();

    ManagerBonus m;
    EmployeeBonus *ptr = &m;
    ptr->show();

    cout<<"smallest value "<<mins(5,4)<<endl;

    return 0;
}