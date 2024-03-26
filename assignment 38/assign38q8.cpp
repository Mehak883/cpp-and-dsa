#include<iostream>
#include <list>
#include <iterator>
using namespace std;

int main(){
      list<int>l1;
 list<int>::iterator x,x1,i;
 int n;
 for(int i=0;i<=6;i++){
cout<<"enter element : ";
cin>> n;
l1.push_back(n);
}  
l1.unique();
for(x=l1.begin();x!=l1.end();x++){
cout<<*x<<"  ";
}

    return 0;
}