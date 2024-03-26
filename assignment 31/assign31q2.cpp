// 2. Write a C++ program to add two numbers using single inheritance. Accept these two numbers from the user in base class and display
// the sum of these two numbers in derived class.
#include<iostream>
using namespace std;
class set{
int a ,b;
public:
void setdata(int a,int b){
this->a=a;
this->b=b;
}
int geta(){
    return a;
}
int getb(){
    return b;
}
};
class addition:public set{
int s;
public:
void sum(){
s=geta()+getb();
}
void display(){
    cout<<s;
}
};
int main(){
addition a1;
a1.setdata(3,5);
a1.sum();
a1.display();    
    return 0;
}