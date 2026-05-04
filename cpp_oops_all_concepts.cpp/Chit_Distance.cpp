#include<iostream>
using namespace std;

class Distance {
    public:
    int d1,d2;

    Distance(){
        d1= 10;
        d2= 20;

    }

    void display(){
        cout<<"Total distance : "<<d1+d2<<endl;
    }

    virtual void show(){
        cout<<"Distance"<<endl;
    }
};

class Travel : public Distance{
    public:
    void show(){
        cout<<"Travel Distance"<<endl;
    }
};

template<typename T>
T divs(T a,T b){
    return a/b;
}

int main(){

    Distance d;
    d.display();

    Travel t;
    Distance *ptr=&t;
    ptr->show();

    cout<<"div : "<<divs(10,2)<<endl;

    return 0;

}