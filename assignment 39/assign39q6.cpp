#include<bits/stdc++.h>
using namespace std;

int main()
{
    forward_list<int> f1,f2;
    int sum,a;
    forward_list<int>::iterator x;
    for(int i=1;i<=5;i++)
    {
        cin>>a;
f1.push_front(a);
    }
    for(int i=1;i<=5;i++)
    {
        cin>>a;
f2.push_front(a);
    }
    f1.merge(f2);
    for (x = f1.begin(); x != f1.end(); x++)
    {
        cout << *x << "  ";
    }
    return 0;
}