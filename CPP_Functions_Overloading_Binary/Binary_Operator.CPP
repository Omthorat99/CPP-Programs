#include<iostream>
using namespace std;

class Demo{
public:
int a;

Demo operator+(Demo d){
    Demo temp;
    temp.a = a + d.a;
    return temp;
}
};

int main(){

Demo d1,d2,d3;

d1.a = 5;
d2.a = 7;

d3 = d1 + d2;

cout<<"Addition = "<<d3.a;

return 0;
}