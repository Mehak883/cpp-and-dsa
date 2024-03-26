// 5. Define a class A having multiple constructors. Define another class B derived from class A. Create derived class constructors and 
// show use of constructor in this single inheritance.
#include<iostream>
using namespace std;
class A{
    protected:
int a;
int b;
public:
A(){
    cout<<"enter a and b";
    cin>>a>>b;
}
A(int a,int b){
      cout<<"p const a \n";
  cout<<a+b;
}
};
class B:public A{
    public:
B():A(){
    cout<<"d const b \n";
cout<<a*b;
}
B(int a,int b):A(2,6){
      cout<<"p const b \n";
cout<<a-b; 
}
};
int main(){
    B b1(4,6);
    return 0;
}