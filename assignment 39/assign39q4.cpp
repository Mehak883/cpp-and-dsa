#include <bits/stdc++.h>
using namespace std;

int main()
{
    forward_list<int> f1;
    int sum;
    forward_list<int>::iterator x;
    for (int i = 1; i <= 10; i++)
    {
        f1.push_front(11 - i);
    }
    f1.reverse();
    cout << "\n\n";
    for (x = f1.begin(); x != f1.end(); x++)
    {
        cout << *x << "  ";
    }
    return 0;
}