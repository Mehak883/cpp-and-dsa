// 8. Given an array arr[] of N elements, the task is to perform using priority_queue and
// the following operation:
// ● Pick the two largest element from the array and remove these element. If the
// elements are unequal then insert the absolute difference of the elements into the
// array.
// ● Perform the above operations until the array has 1 or no element in it. If the array has
// only one element left then print that element, else print “-1”.
// Example:
// Input: arr[] = { 3, 5, 2, 7 }
// Output: 1
// Explanation:
// The two largest elements are 7 and 5. Discard them. Since both are not equal, insert
// 7 – 5 = 2 into the array. Hence, arr[] = { 3, 2, 2 }
// The two largest elements are 3 and 2. Discard them. Since both are not equal, insert
// 3 – 2 = 1 into the array. Hence, arr[] = { 1, 2 }
// The two largest elements are 2 and 1. Discard them. Since both are not equal, insert
// 2 – 1 = 1 into the array. Hence, arr[] = { 1 }
// The only element left is 1. Print the value of the only element left.
#include <iostream>
#include <queue>
#include <array>
#include <iterator>
using namespace std;
void show(priority_queue<int> q1){
   while (!q1.empty())
    {
        cout << q1.top() << " ";
        q1.pop();
    }
    cout<<endl<<endl;
}
int main()
{
    array<int, 4> a = {3, 5, 2, 7};
    array<int, 4>::iterator i;
    int x, y;
    priority_queue<int> q;
    for (i = a.begin(); i != a.end(); i++)
    {
        q.push(*i);
    }
    while (!q.empty())
    {
        x = q.top();
        q.pop();
        y = q.top();
        q.pop();
        q.push(x - y);
        show(q);
        if (q.size() == 1)
        {
            cout << q.top();
            break;
        }
    }
    return 0;
}