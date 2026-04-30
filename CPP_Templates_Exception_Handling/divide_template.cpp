#include<iostream>
using namespace std;

template<typename T>
T divide(T a,T b){
    if(b == 0){
        throw "Error : Division by zero is not allowed";
    }
    return a/b;
}
int main(){
    try{
    int x=10 , y=4;
    cout<<"Division(int): "<<divide(x,y);

     float p = 5.5, q = 2.0;
        cout << "Division (float): " << divide(p, q) << endl;

        // Test case with b = 0
        int a = 8, b = 0;
        cout << "Division: " << divide(a, b) << endl;
}
catch (const char*msg){
    cout<<msg<<endl;

}
return 0;
}