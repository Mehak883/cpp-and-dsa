//6. Write a c++ program, to use priority_queue to implement min heap
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int> q;
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