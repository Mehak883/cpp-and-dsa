// 5. Write a c++ program, to show that priority_queue is by default a Max Heap.
// Note:If elements are printed in descending order, then we have a max heap.
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int,vector<int>,greater<int>> q;
    int a;
    for (int i = 0; i < 5; i++)
    {
        cin >> a;
        q.push(a);
    }
    while (!q.empty())
    {
        cout << q.top()<<" ";
        q.pop();
    }
    return 0;
}