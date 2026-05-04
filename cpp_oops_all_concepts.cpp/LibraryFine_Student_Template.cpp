#include<iostream>
using namespace std;

class LibraryFine{
    public:
    int dayLate,fineperDay;

    LibraryFine(){
        dayLate = 5;
        fineperDay = 2;
    }

    void display(){
        cout<<"Fine : "<<dayLate*fineperDay<<endl;
    }

    virtual void show(){
        cout<<"fine"<<endl;
    }
};

class StudentFine : public LibraryFine{
    public:
    void show(){
        cout<<"student fine  "<<endl;
    }
};

template<typename T>
T maxs(T a,T b){
    return (a>b) ? a:b;
}


int main(){
    LibraryFine l;
    l.display();

    StudentFine s;
    LibraryFine *ptr =&s;
    ptr->show();

    cout<<"Larger number : "<<maxs(2,4)<<endl;

    return 0;
}