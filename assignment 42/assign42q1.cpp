//1. Print all elements of a queue in C++ STL
#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q1;
    int d,i=0;
    for(i=0;i<6;i++){
        cin>>d;
        q1.push(d);
    }
    while(!q1.empty()){
        cout<<q1.front()<<" ";
     q1.pop();
    }
    return 0;
}