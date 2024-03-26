// 2. Define a class Complex with appropriate instance variables and member functions. One of the functions should be setData() to set the
// properties of the object. Make sure the names of formal arguments are the same as names of instance variables.
#include<iostream>
using namespace std;
class complex{
int a,b;
public:
void setdata(int a,int b){
    this->a=a;
    this->b=b;
}
void getdata(){
    cout<<a<<endl;
    cout<<b<<endl;
}
};
int main(){
    complex c1,c2;
    c1.setdata(2,4);
    c1.getdata();
    c2.setdata(4,6);
    c2.getdata();
    return 0;
}