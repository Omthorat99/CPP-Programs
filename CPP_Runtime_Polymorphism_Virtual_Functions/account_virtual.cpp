#include<iostream>
using namespace std;

class Account{
    public:
    virtual void balance(){
        cout<<"Account Balance"<<endl;
    }

};

class Saving : public Account{
    public:
    void balance(){
        cout<<"Saving account Balance = 50000"<<endl;

    }
};
class Current : public Account{
    public:
    void balance(){
        cout<<"Current account Balance = 80000"<<endl;

    }
};

int main(){

    Account *a;

    Saving s;
    Current c;

    a = &s;
    a->balance();

    a= &c;
    a->balance();

    return 0;
}