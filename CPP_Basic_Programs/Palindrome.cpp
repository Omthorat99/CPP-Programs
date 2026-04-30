#include<iostream>
using namespace std;

class Palindrome{
    
    public:
    int rem,num,reverse=0,temp;

    void GetData(){
        cout<<"Enter a number : ";
        cin>>num;

    }

    void checkPalindrome(){
        temp = num;

        while(num !=0){
        rem = num % 10 ;
        reverse = reverse * 10 + rem;
        num = num / 10;}

        if(temp == reverse){
           cout<< "Is a palindrome";
        }
        else{
            cout<<"is not a  palindrome ";
        }
    }

    
};
int main()
{
    Palindrome p;
    p.GetData();
    p.checkPalindrome();

    return 0;
}
