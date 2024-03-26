// 7. Given two sorted arrays A[] and B[] of sizes N and M respectively, the task is to
// merge them in a sorted manner using priority_queue.
// Example:
// Input: A[] = { 5, 6, 8 }, B[] = { 4, 7, 8 }
#include <iostream>
#include <queue>
#include <array>
#include <iterator>
using namespace std;
int main()
{
    array<int, 3> a = {5, 6, 8};
    array<int, 3> b = {4, 7, 8};
    priority_queue<int, vector<int>, greater<int>> q;
    array<int, 3>::iterator i;
    for (i = a.begin(); i != a.end(); i++)
    {
        q.push(*i);
    }
    for (i = b.begin(); i != b.end(); i++)
    {
        q.push(*i);
    }
    while (!q.empty())
    {
        cout << q.top() << " ";
        q.pop();
    }
    return 0;
}