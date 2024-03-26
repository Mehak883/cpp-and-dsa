// Returns a constant iterator pointing to the first element of the container, that is, the
// iterator cannot be used to modify, only traverse the deque.
#include<iostream>
#include<deque>
#include<iterator>
using namespace std;
int main(){
deque<int> q1;
deque<int>::const_iterator it;
int a;
for(int i=0;i<=5;i++){
    cin>>a;
q1.insert(q1.begin()+i,a);
}
for(it=q1.begin();it!=q1.end();it++){
cout<<*it<<"  ";
}
    return 0;
}