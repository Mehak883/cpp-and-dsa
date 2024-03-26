//5. Create a c++ program using multiset and returns whether the multiset is empty –> O(1)
#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main(){
    multiset<int>m1;
    if(m1.empty()){
        cout<<"yess";
    }
    else{
        cout<<"no";
    }
    return 0;
}