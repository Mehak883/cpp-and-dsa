// 1. Create a class FLOAT that contains one float data member. Overload all the four arithmetic operators so that they can operate on
//  the objects of FLOAT.

#include<iostream>
using namespace std;
class FLOAT{
float a;
public:
FLOAT(){
    a=0;
}
FLOAT(int x){
    a=x;
}
FLOAT operator+(FLOAT f){
    FLOAT temp;
    temp.a=a+f.a;
    return temp;
}
FLOAT operator-(FLOAT f){
    FLOAT temp;
    temp.a=a-f.a;
    return temp;
}
FLOAT operator*(FLOAT f){
    FLOAT temp;
    temp.a=a*f.a;
    return temp;
}
FLOAT operator/(FLOAT f){
    FLOAT temp;
    temp.a=a/f.a;
    return temp;
}
void display(){
cout<<a <<endl;
}
};
int main(){
    FLOAT f1(4);
    FLOAT f2(2);
    FLOAT f3;
    f3=f1+f2;
    f3.display();
    f3=f1-f2;
    f3.display();
    f3=f1*f2;
    f3.display();
    f3=f1/f2;
    f3.display();
    return 0;
}