#include<iostream>
using namespace std;
int main(){

    int num,sum=0;

    cout<<"Enter a value of num : ";
    cin>>num;

    for(int i=1;i<=num;i++){
        sum =sum+ i;

    }

    cout<<"Sum of N natural number is : "<<sum;

    return 0;

}