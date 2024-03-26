#include<iostream>
using namespace std;

int main(){
    int *p=new int(10);  //single 4 byte memory created 
    int *a=new int [10];
    if(!p||!a){//jb p k andr null hoga aur memory create nhi hogi fir chleha y
cout<<"insufficient memory";
return 0;
    }
cout<<*p<<endl;
cout<<"enter 10 values : ";
for(int i=1;i<=10;i++){
    cin>>a[i];
}
cout<<"\n values are : ";
for(int i=1;i<=10;i++){
    cout<<a[i]<<"  ";
}
delete p;
delete []a;
//cout<<*a;
    return 0;
}