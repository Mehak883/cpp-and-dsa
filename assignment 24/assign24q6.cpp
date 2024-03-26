// 6. Define a function to swap data of two int variables using call by reference
#include<iostream>
using namespace std;
void swap(int &x,int &y){
int temp;
temp=x;
x=y;
y=temp;
}
int main(){
    int a,b;
    cout<<"enter a : ";
    cin>>a;
    cout<<"enter b : ";
    cin>>b;
    swap(a,b);
    cout<<"a = "<<a;
    cout<<"\nb = "<<b;
    return 0;
}