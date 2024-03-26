//6. Assign values to the same or different deque container.
#include<iostream>
#include<deque>
#include<iterator>
using namespace std;
int main(){
deque<int> q1,q2={2,3,5};
deque<int>::iterator it;
int a;
q1.assign(3,5);
q1.assign(q2.begin(),q2.end());
for(it=q1.begin();it!=q1.end();it++){
cout<<*it<<"  ";
}
    return 0;
}