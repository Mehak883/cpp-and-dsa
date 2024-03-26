// 3. Create a stack, and implement main operations like push(), pop(), peek(), empty() and size().
#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s1;
    s1.push(5);
    s1.push(6);
    s1.push(7);
    s1.push(8);
    s1.pop();
    if (s1.empty() == 0)
    {
        cout << "empty";
    }
    else
    {
        cout << "not empty ";
    }
    cout <<"\n size = "<< s1.size();
    return 0;
}