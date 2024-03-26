//8. Remove elements from a container from the specified position or range in deque.
#include<iostream>
#include<deque>
#include<iterator>
using namespace std;
int main(){
    deque<int> d1;
    deque<int> ::iterator it,it1;
    int a;
for(int i=0;i<=5;i++){
    cin>>a;
d1.insert(d1.begin()+i,a);
}
it=d1.begin()+2;
it1=d1.begin()+4;
//d1.erase(it);
 d1.erase(it,it1);
for(it=d1.begin();it<=d1.end();it++){
cout<<*it<<"  ";
}
    return 0;
}