#include<iostream>
using namespace std;

template<typename T>
T cube(T num){
    if(num == 0){
        throw "Error: num should not be zero";
    }
    return num*num*num;
}

int main(){
    try{
        int x=4;
        cout<<"cube(int): "<<cube(x)<<endl;

        float y=3.4;
        cout<<"cube(float) : "<<cube(y)<<endl;

        int a=0;
        cout<<"cube : "<<cube(a)<<endl;
    }
    catch(const char*msg){
        cout<<msg<<endl;
    }
    return 0;
}