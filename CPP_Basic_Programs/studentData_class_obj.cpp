#include<iostream>
using namespace std;

class Student{
    public:
    int roll;
    string name;
    float marks;

    void GetData(){

        cout<<"Enter a roll , name and marks : ";
        cin>>roll>>name>>marks;

    }
    void DispalyData(){
        cout<<"roll no"<<roll<<endl;
        cout<<"name"<<name<<endl;
        cout<<"marks"<<roll<<marks;
    }
  
};

int main(){
   Student s[10];
   for (int i=0;i<10;i++){
    cout<<"Enter a data of students : "<<i+1<<endl;
    s[i].GetData();
   }

   cout<<"\n show records \n";

     for (int i=0;i<10;i++){
    cout<<"\n Data of the sudents are : "<<i+1<<endl;
    s[i].DispalyData();
     }

     return 0;



    
}