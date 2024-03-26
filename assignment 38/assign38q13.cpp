#include<iostream>
#include <list>
#include <iterator>
using namespace std;

int main(){
      list<char>l1;
 list<char>::iterator x;
 char n;
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