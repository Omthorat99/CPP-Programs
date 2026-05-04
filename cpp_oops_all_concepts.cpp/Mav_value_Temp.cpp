#include<iostream>
using namespace std;

class MaximumValue{
    public:

    int num1,num2;

    MaximumValue(){
        num1 = 30;
        num2 = 50;
    }

    void display(){
        cout<<"Both values are : "<<num1<<" "<<num2<<endl;
    }

    virtual void show(){
        cout<<"Maximum Value"<<endl;
    }
};

class compare : public MaximumValue{
    public:

    void show()
{
    cout<<"Maximum Value : "<<endl;
}

};

template<typename T>
T maxs(T a,T b){
    return (a>b) ? a:b;
}

int main(){

    MaximumValue m;
    m.display();

    compare c;
    MaximumValue *ptr =&c;
    ptr->show();

    cout<<"large value :"<<maxs(7,1)<<endl;

    return 0;

}