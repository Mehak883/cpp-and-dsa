// 6. Create a c++ program using multiset and inserts the element x in the multiset –>O(log n)#include<iostream>
#include <iostream>
#include <set>
#include <iterator>
using namespace std;
int main()
{
    multiset<int> m1;
    multiset<int>::iterator it;

    int a;
    for (int i = 0; i < 5; i++)
    {
        cin >> a;
        m1.insert(a);
    }
    for (it = m1.begin(); it != m1.end(); it++)
    {
        cout<<*it<<"  ";
    }
    return 0;
}