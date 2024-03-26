//5. Returns the maximum number of elements that a deque container can hold.
#include<iostream>
#include<deque>
#include<iterator>
using namespace std;
int main(){
    deque<int> d1;
    cout<<d1.max_size();
    return 0;
}