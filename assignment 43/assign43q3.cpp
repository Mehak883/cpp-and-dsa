//3. Write a c++ program, to demonstrate priority queue having a min element at top.
#include<iostream>
#include<queue>
using namespace std;

int main(){
 priority_queue<int,vector<int>,greater<int>> q;
 int a;
    for (int i = 0; i < 5; i++)
    {
        cin >> a;
        q.push(a);
    }
    cout<<q.top();
    return 0;
}