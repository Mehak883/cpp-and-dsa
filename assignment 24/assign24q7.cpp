//7. Write a function using the default argument that is able to add 2 or 3 numbers.
#include<iostream>
using namespace std;
int add(int a,int b,int c=0){
int sum=a+b+c;
return sum;
}
int main(){
    int x,y,z;
    cout<<"enter x and y : ";
    cin>>x>>y;
    cout<<"sum = "<<add(x,y);
    cout<<"\nenter z";
    cin>>z;
        cout<<"sum = "<<add(x,y,z);
    return 0;
}