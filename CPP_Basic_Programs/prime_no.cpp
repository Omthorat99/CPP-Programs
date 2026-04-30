#include <iostream>
using namespace std;
int main(){
    int num,i,count=0;

    cout<<"Enter a number : ";
    cin>>num;

    for(int i=1;i<=num;i++){
        if(num%i==0){
            count ++;
        }
    }
    if(count == 2){
        cout<<"Is a prime number ";
    }
    else{
        cout<<"Not a prime number ";
    }
    return 0;
}