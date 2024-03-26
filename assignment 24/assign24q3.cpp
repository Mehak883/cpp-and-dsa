//3. Define a function to calculate x raised to the power y.
#include<iostream>
#include<math.h>
using namespace std;
int power(int num,int p1){
int a;
a=pow(num,p1);
return a; 
}
int main(){
    int n,p;
    cout<<"enter a num : ";
    cin>>n;
cout<<"enter power : ";
cin>>p;
cout<<"ans is : "<<power(n,p);
    return 0;
}