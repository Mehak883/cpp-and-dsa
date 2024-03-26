// 7. Create a stack of int type and descending sort it.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s1, s2;
    int a;
    for (int i = 0; i <= 5; i++)
    {
        cin >> a;
        s1.push(a);
    }

    s2.push(s1.top());
    // cout<<s2.top();
    s1.pop();
    while (!s1.empty())
    {
        a = s1.top();
        s1.pop();
        if (s2.top() > a)
        {
            s2.push(a);
        }
        else
        {
            while (s2.top() < a)
            {

                s1.push(s2.top());
                s2.pop();
if(s2.empty()==1){
break;
}
            }
            s2.push(a);
        }
    }
    while (!s2.empty())
    {
        cout << s2.top() << "  ";
        s2.pop();
    }

    return 0;
}