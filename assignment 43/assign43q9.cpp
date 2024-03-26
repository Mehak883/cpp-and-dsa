// 9. Given three arrays X[], Y[], and Z[] each consisting of N integers, the task is to find
// the maximum number of triplets (X[i], Y[i], Z[i]) such that (X[i] < Y[i] < Z[i]) for any
// permutation of the three arrays using priority_queue
// Input: X = {9, 6, 14, 1, 8}, Y = {2, 10, 3, 12, 11}, Z = {15, 13, 5, 7, 4}
// Output: 3
// Explanation:
// After rearranging the arrays X[], Y[] and Z[] as {1, 6, 8, 9, 14}, {3, 2, 10, 12, 11}, and
// {4, 7, 15, 13, 5} respectively. The increasing triplets are {1, 3, 4}, {8, 10, 15} and {9,
// 12, 13}.
// Therefore, the total count of such triplets is 3.
#include <iostream>
#include <queue>
#include <array>
#include <iterator>
using namespace std;
priority_queue<int, vector<int>, greater<int>> set(array<int, 5> z1)
{
    priority_queue<int, vector<int>, greater<int>> q;
    array<int, 5>::iterator i;
    for (i = z1.begin(); i != z1.end(); i++)
    {
        q.push(*i);
    }
    return q;
}
void show(priority_queue<int, vector<int>, greater<int>> q1)
{
    while (!q1.empty())
    {
        cout << q1.top() << " ";
        q1.pop();
    }
    cout << endl
         << endl;
}
int main()
{
    priority_queue<int, vector<int>, greater<int>> q1, q2, q3;
    array<int, 5> a1 = {9, 6, 14, 1, 8}, a2 = {2, 10, 3, 12, 11}, a3 = {15, 13, 5, 7, 4};
    int a, b, c;
    q1 = set(a1);
    q2 = set(a2);
    q3 = set(a3);
    show(q1);
    show(q2);
    show(q3);
    while (!q1.empty()&&!q2.empty()&&!q3.empty()){
 a = q1.top();q1.pop();
b = q2.top();q2.pop();
c= q3.top(); q3.pop();
if((a<b)&&(b<c)){
    cout<<a<<"  "<<b<<"  "<<c<<endl;
}
    }
    return 0;
}