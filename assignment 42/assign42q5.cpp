#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q1,q2;
    int d,i=0;
  
    for(i=0;i<3;i++){
        cin>>d;
        q1.push(d);
    }
      for(i=0;i<5;i++){
        cin>>d;
        q2.push(d);
    }
    q1.swap(q2);
    while(!q1.empty()){
        cout<<q1.front()<<" ";
     q1.pop();
    }
      while(!q2.empty()){
        cout<<q2.front()<<" ";
     q2.pop();
    }
    return 0;
}