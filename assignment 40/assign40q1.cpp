#include<iostream>
#include<deque>
#include<iterator>
using namespace std;
int main(){
deque<int> q1;
deque<int> ::iterator i1;
int a;
for(int i=0;i<=5;i++){
    cin>>a;
q1.insert(q1.begin()+i,a);
}
i1=q1.begin();
cout<<*i1;
    return 0;
}