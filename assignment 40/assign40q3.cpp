// 3. Returns a reverse iterator which points to the position before the beginning of the
// deque (which is considered its reverse end).
#include<iostream>
#include<deque>
#include<iterator>
using namespace std;
int main(){
deque<int> q1;
int a;
for(int i=0;i<=5;i++){
    cin>>a;
q1.insert(q1.begin()+i,a);
}
auto i1=q1.rend();
cout<<*i1;
    return 0;
}