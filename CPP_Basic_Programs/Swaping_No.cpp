#include<iostream>
using namespace std;

class Swap{

    public:
    int a,b,temp;

    void GetData(){
        cout << "Enter the value of a and b : ";
        cin>>a>>b;
    }

    void swaping(){
        temp=a;
        a=b;
        b=temp;
    }

    void Display(){
        cout<<"After swapping : ";
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    }

};

int main(){
    Swap s;
    s.GetData();
    s.swaping();
    s.Display();

    return 0;
}