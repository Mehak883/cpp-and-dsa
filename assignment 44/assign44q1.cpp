//1. Find the total number of elements of the set container.
#include<iostream>
#include<set>
#include<iterator>
using namespace std;

int main(){
    set<int>s1;
    int i=0,a;
    for(i=0;i<6;i++){
        cin>>a;
        s1.insert(a);
    }
    for(auto it: s1){
        cout<<it<<"  ";
    }
    cout<<"\n\n";
    cout<<s1.size();
    return 0;
}