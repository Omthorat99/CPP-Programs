#include<iostream>
using namespace std;

class addition{

public:

int add(int a, int b){
    return a+b;
}

float add1(float a, float b){
    return a+b;
}

};

int main(){

addition a;

cout<<"Addition of integers: "<<a.add(5,3)<<endl;
cout<<"Addition of integers: "<<a.add1(5.2,3.4)<<endl;


return 0;

}