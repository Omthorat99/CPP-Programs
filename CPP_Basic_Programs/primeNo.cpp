#include<iostream>
using namespace std;

class Prime
{
    public:

    int num,i,count=0;

    void GetData(){
        cout<<"Enter a number : ";
        cin>>num;
    }

    void checkprime(){
        for(int i=1;i<=num;i++){
            if(num % i == 0){
                count ++;
            }
        }
        if(count == 2){
            cout<<"Is a prime number :";
        }
        else{
            cout<<"Is not a prime number :";
        }
    }
};
int main(){

    Prime p;
    p.GetData();
    p.checkprime();

    return 0;
}

