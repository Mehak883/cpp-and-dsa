#include<bits/stdc++.h>
using namespace std;

int main()
{
    forward_list<int> f1;
    int sum,a;
    forward_list<int>::iterator x;
    for(int i=1;i<=10;i++)
    {
        cin>>a;
f1.push_front(a);
    }
    f1.unique();
    for (x = f1.begin(); x != f1.end(); x++)
    {
        cout << *x << "  ";
    }
    return 0;
}