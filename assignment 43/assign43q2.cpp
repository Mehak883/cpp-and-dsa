// 2. Implement different operations on priority queue .i.e. adding element, removing
// element, size of priority queue, and print it.
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<int>> q;
    int a;
    for (int i = 0; i < 5; i++)
    {
        cin >> a;
        q.push(a);
    }
    q.push(8);
    q.pop();
    a = q.size();
    cout << a << endl;
    while (!q.empty())
    {
        cout << q.top() << " ";
        q.pop();
    }
    return 0;
}