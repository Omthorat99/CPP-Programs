#include<iostream>
using namespace std;
class lib{
    public:

    int bookid,available;
    string name;

    void GetData(){
        cout<<"Enter book id: ";
        cin>>bookid;

        cout<<"Enter book name: ";
        cin>>name;

        cout<<"Enter avalability (1 = avalable & 0 = not avaiable)";
        cin>>available;
    }

    void issueBook(){
        cout<<"\nbook id : "<<bookid<<endl;
        cout<<"\nname : "<<name<<endl;

        if(available == 1){
            cout<<"Book is available , You will issue it "<<endl;
        }
        else{
            cout<<"Sorry But book is not available"<<endl;
        }


    }

};

int main(){
    lib b;
    b.GetData();
    b.issueBook();

    return 0;
}