#include<iostream>
using namespace std;

template<typename T>
T average(T a, T b){
    if(a<0 && b<0){
        throw "Error: negative values not allowed";
    }
    return (a+b)/2;
}

int main(){

    try{
         int x = 10, y = 20;
        cout << "Average (int): " << average(x, y) << endl;

        // Test with double
        double p = 5.5, q = 3.5;
        cout << "Average (double): " << average(p, q) << endl;

        // Test case with negative value
        int a = -4, b = 6;
        cout << "Average: " << average(a, b) << endl;
    }
    catch(const char*msg){
        cout<<msg<<endl;
    }
    return 0;
}