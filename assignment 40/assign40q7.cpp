//7. Return the first element and last element of the deque container.
#include<iostream>
#include<deque>
#include<iterator>
using namespace std;
int main(){
deque<int> q1;
deque<int>::iterator it;
int a;
for(int i=0;i<=5;i++){
    cin>>a;
q1.insert(q1.begin()+i,a);
}
cout<<"first element  : "<<q1.front();
cout<<"\nlast element  : "<<q1.back();
    return 0;
}