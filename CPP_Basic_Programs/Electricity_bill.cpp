#include<iostream>
using namespace std;

class bill{
    public:

    int unit,rate=5,bill,discount,finalbill;

    void GetData(){
        cout<<"Enter a number of units : ";
        cin>>unit;
    
    }

    void calculate(){
        bill= unit*rate;
        discount = bill * 0.02;
        finalbill = bill-discount;

    }

    void DisplayData(){
        cout<<"Totalbill : "<<bill<<endl;
        cout<<"discount : "<<discount<<endl;
        cout<<"finalbill : "<<finalbill<<endl;
    }



};