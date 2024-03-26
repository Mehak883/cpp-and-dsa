//3. Create a c++ program using multiset and returns the number of elements in the multiset –> O(1)
#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main(){
    multiset<int>m1;
    int a;
for(int i=0;i<5;i++){
    cin>>a;
    m1.insert(a);
}
cout<<m1.size();
    return 0;
}