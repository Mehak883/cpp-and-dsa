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
l1.remove(5);
for(x=l1.begin();x!=l1.end();x++){
cout<<*x<<"  ";
}
x=l1.begin();
x1=l1.begin();
advance(x,2);
advance(x1,5);
l1.erase(x,x1);
cout<<"\n\n";
for(i=l1.begin();i!=l1.end();i++){
cout<<*i<<"  ";
}
    return 0;
}