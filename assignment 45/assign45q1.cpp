// 1. Create a c++ program using multiset and returns an iterator to the first element in the multiset –> O(1)
#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main(){
    multiset<int>m1;
    multiset<int>::iterator i;
    m1.insert(3);
    cout<<*m1.begin();
    
    return 0;

}