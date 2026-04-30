#include<iostream>
using namespace std;

class Shape3D{
    public:
    virtual void volume(){
        cout<<"Volube of shape 3D"<<endl;
    }
};

class Cube : public Shape3D{
    public:
    void volume(){
        cout<<"volume of cube"<<endl;
    }
};

class Sphere : public Shape3D{
    public:
    void volume(){
        cout<<"volume of a sphere"<<endl;
    }
};

int main(){

    Shape3D *s;

    Cube c;
    Sphere x;

    s = &c;
    s->volume();

    s= &x;
    s->volume();

    return 0;

}
