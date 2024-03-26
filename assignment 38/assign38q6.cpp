#include<iostream>
#include <list>
#include <iterator>
using namespace std;

int main(){
     list<int>l1;
 list<int>::iterator x;
 int n;
 for(int i=0;i<=6;i++){
cout<<"enter element : ";
cin>> n;
l1.push_back(n);
}  
cout<<l1.front()<<"\n";
cout<<l1.back();
    return 0;
}