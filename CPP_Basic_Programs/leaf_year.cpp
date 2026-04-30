#include<iostream>
using namespace std;
int main(){

    int year=0;
    cout<<"Enter the year which you want to check : ";
    cin>>year;

    if((year % 4 == 0 && year % 100 != 0 ) || (year % 400 == 0)){
        cout<<"Is a leaf year ";
    }
    else {
        cout<<"Is NOT a leaf year ";
    }

    return 0;
}