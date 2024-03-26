//2. Create a c++ program using multiset and returns an iterator to the theoretical element that follows the last element in the multiset –> O(1)
#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main(){
    multiset<int>m1;
    multiset<int>::iterator i;
    m1.insert(3);
    m1.insert(2);
    m1.insert(1);
    i=m1.end();
    i--;
    cout<<*i;
    return 0;
}