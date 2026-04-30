#include<iostream>
using namespace std;
class medicineBILL{
    public:
    int consulting,medicine;
    float total;

    medicineBILL(){

        cout<<"Enter a consultant bill : ";
        cin>>consulting;

        cout<<"Enter a medicine cost : ";
        cin>>medicine;

        total=consulting+medicine;
        cout<<"Total bill is = "<<total<<endl;

    }

};

int main(){
    medicineBILL m;
    return 0;

}