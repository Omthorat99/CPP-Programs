#include<iostream>
using namespace std;

float area(float base , float height){
    return 0.5*base*height;
}
float area(float radius){
    return 3.14*radius*radius;
}
int main(){

    float height,base,radius;
    //for triangle
    cout<<"Enter the value of base and height : ";
    cin>>height>>base;
    cout<<"Area of the triangle is :"<<area(base,height)<<endl;

    //for circle

     cout<<"Enter the value of radius : ";
    cin>>radius;
    cout<<"Area of circle is :"<<area(radius)<<endl;

    return 0;


}