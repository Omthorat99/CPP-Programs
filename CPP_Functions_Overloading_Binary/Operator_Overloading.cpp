#include<iostream>
using namespace std;
class Demo{
    public:

    int x;

    void GetData(){
        cout<<"Enter the value of x : ";
        cin>>x;
    }

    void operator++(){
        x++;
    }
    void Display(){
        cout<<"value is : "<<x;
    }

};
int main(){
    Demo d;
    d.GetData();
    
    d.operator++();
    d.Display();

    return 0;
}