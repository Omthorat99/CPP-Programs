#include<iostream>
using namespace std;

template<typename T>
T fmax(T a,T b){
    if(a == b){
        throw "Error : Both Values are equal";

    }
    return (a > b) ? a : b;
    // return a==b;
}

int main(){
    try{
        int x=2 , y=4;
        cout<<"max int : "<<fmax(x,y)<<endl;

        float p=3.2, q=1.2;
        cout<<"max float : "<<fmax(p,q)<<endl;

        int a=5 , b=3;
        cout<<"max : "<<fmax(a,b)<<endl;
    }
    catch(const char*msg){
        cout<<msg<<endl;
    }
    return 0;
}

