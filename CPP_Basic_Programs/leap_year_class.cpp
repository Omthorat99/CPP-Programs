#include<iostream>
using namespace std;
class Leap
{
    public:
    int num;

    void GetData(){
        cout<<"Enter a year : ";
        cin>>num;

    }

    void CheckLeap(){
        if((num % 4 == 0 && num % 100 != 0) || (num % 400 == 0))
        {
            cout<<"Is a Leap year";
        }
        else {
            cout<<"Is not a leap year";
        }
    }
};

int main(){
    Leap p;
    p.GetData();
    p.CheckLeap();


    return 0;
}
