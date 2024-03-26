// 4. Reverse the Words of a String using Stack.
// Example:
// Input: str = “I Love To Code”
// Output: Code To Love I
#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s = "I Love To code";
    string temp,t2;

    stack<string> s1;
    int i = 0, j = 1;
    while (i < s.length())
    {
        if (s.at(i) != ' ')
        {
t2=s.at(i);
        temp.append(t2);
        }
        else
        {
            s1.push(temp);
            temp.clear();
            j = j + 1;
        }
        i++;
    }
s1.push(temp);
    for (i = 0; i <= j; i++)
    {
        cout << s1.top() << " ";
        s1.pop();
    }
    return 0;
}