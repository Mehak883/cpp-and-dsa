#include<iostream>
#include<forward_list>
#include<iterator>
using namespace std;

int main(){
    forward_list<int> l1;
    forward_list<int>l2;
      forward_list<int>l3;  
    // 1 method to assign
forward_list<int>::iterator x;
l1.assign({1,2,3,4,5});
for(x=l1.begin();x!=l1.end();x++){
    cout<<*x<<" ";
}
cout<<endl;
l2.assign(5,1);
for(x=l2.begin();x!=l2.end();x++){
    cout<<*x<<" ";
}
l3.assign(l1.begin(),l1.end());
cout<<endl;
int i=0;
for(x=l3.begin();x!=l3.end();x++){
    cout<<*x<<" ";
i++;
}
cout<<"\n"<<i;
x=l3.begin();
for(int m=0;m<i-1;m++){
x++;
}
l3.insert_after(x,{6,7,8,9});

cout<<endl;
for(x=l3.begin();x!=l3.end();x++){
    cout<<*x<<" ";
}
    return 0;
}