#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    vector<int>::iterator x;
    int a;
    cout << "enter 6 element : ";
    for (int i = 0; i <= 6; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    cout << " elements are : ";
    for (x = v.begin(); x != v.end(); x++)
    {
        cout << *x << "  ";
    }
    int sum;
    sum = accumulate(v.begin(), v.end(), 0);
    cout << "sum = " << sum;
    return 0;
}