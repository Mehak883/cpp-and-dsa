// 6. Reverse a string using a stack.
// Example:
// Input: str = "Reverse me"
// Output: em esreveR
#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s = "Rverese me";
    string temp,t2;

    stack<string> s1;
    int i = 0, j = 1;
    while (i < s.length())
    {
t2=s.at(i);
s1.push(t2);
        i++;
    }

    while  (!s1.empty())
    {
        cout << s1.top() << "";
        s1.pop();
    }
    return 0;
}