#include<iostream>
using namespace std;

template<typename T>
T power(T a,T b){
    if(b<0){
        throw "Error:negative exponent not allowed";

    }
    T result = 1;
    for(int i=0;i<b;i++){
        result=result*a;
    }
    return result;
}

int main(){
    try{
        int x=2,y=4;
        cout<<"Power(int) : "<<power(x,y)<<endl;

        double p=3.2 , q=3;
        cout<<"Power(float): "<<power(p,q)<<endl;

        int a=3,b=-3;
        cout<<"power : "<<power(a,b)<<endl;
    }
    catch(const char*msg){
        cout<<msg<<endl;

    }
    return 0;
}