#include<iostream>
using namespace std;

class Prime{
public:

    int n;

    void GetData(){
        cout<<"Enter value of n: ";
        cin>>n;
    }

    void PrintNum(){

        for(int i=2;i<=n;i++){
            int count=0;

            for(int j=1;j<=i;j++){
                if(i%j==0){
                    count++;
                }
            }

            if(count==2){
                cout<<i<<" ";
            }
        }
    }
};

int main(){

    Prime p;

    p.GetData();
    p.PrintNum();

    return 0;
}