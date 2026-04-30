#include<iostream>
using namespace std;

template<typename T>
T fmin(T a,T b){
    if(a<0 && b<0){
        throw "Error : Both values are negative";
    }
    // return a<0 && b<0; 
    return (a < b) ? a : b;
}

int main(){
    try{
        int x=3 ,y=5;
        cout<<"min int : "<<fmin(x,y)<<endl;

        double p=4.3 , q= 3.4;
        cout<<"double min : "<<fmin(p,q)<<endl;

        int a=-4 , b=4;
        cout<< "negative value : "<<fmin(a,b)<<endl;
    }
    catch (const char*msg){
        cout<<msg<<endl;
    }
    return 0;
}