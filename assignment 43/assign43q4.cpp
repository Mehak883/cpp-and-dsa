//4. Write a c++ program, to swap the elements of two priority queues of int type.
// 1. Write a c++ program, to demonstrate priority queue.
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int,vector<int>,greater<int>> q,q1;
    int a;
    for (int i = 0; i < 5; i++)
    {
        cin >> a;
        q.push(a);
    }
     for (int i = 0; i < 5; i++)
    {
        cin >> a;
        q1.push(a);
    }
    q.swap(q1);
    while (!q.empty())
    {
        cout << q.top()<<" ";
        q.pop();
    }
    cout<<"\n";
    while (!q1.empty())
    {
        cout << q1.top()<<" ";
        q1.pop();
    }
    return 0;
}