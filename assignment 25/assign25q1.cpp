// 1. Define a class Complex to represent a complex number. Declare instance member variables to store real 
//and imaginary part of a complex number, also define instance member functions to set values of complex
// number and print values of complex number
#include<iostream>
using namespace std;
class complex_no{
int real;
int imaginary;
public: 
void display(){
    cout<<real<<" + i"<<imaginary;
}
void set_data(){
    cout<<"real term : ";
    cin>>real;
    cout<<"imaginary term : ";
    cin>>imaginary;
}
};
int main(){
    complex_no c1;
    c1.set_data();
    c1.display();
    return 0;
}