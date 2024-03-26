//9. Write a C++ program to calculate the area of triangle, rectangle and circle using constructor overloading. The program should be 
//menu driven.
#include<iostream>
using namespace std;
class area{
float base,height;
int length,breadth,rad;
public:
area(float b,float h){
base =b;
height =h;
cout<<"area of triangle : "<<0.5*b*h<<endl;
}
area(int len,int brd){
    length=len;
    breadth=brd;
    cout<<"area of rect : "<<length*breadth<<endl;
}
area(int rad){
    this->rad=rad;
cout<<"area of circle : "<<3.14*rad*rad;
}
};
int main(){
    int ch;
    cout<<"enter ur ch : ";
    cin>>ch;
    switch (ch){
        case 1:
        area(2.0f,6.0f);
    break;
    case 2:
    area(5,4);
    break;
    case 3:
    area(10);
    break;
    default:
        exit(0);
    
    }
    return 0;
}