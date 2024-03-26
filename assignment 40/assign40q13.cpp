// 13. Segregate even and odd nodes in a Linked List using Deque.
#include <iostream>
#include <deque>
#include <list>
#include <iterator>
using namespace std;
int main()
{
    list<int> l1;
    deque<int> d1;
    deque<int>::iterator x;
    list<int>::iterator it;
    int a;
    for (int i = 0; i <= 5; i++)
    {
        cin >> a;
        l1.push_back(a);
    }
    for (it = l1.begin(); it != l1.end(); it++)
    {
        if (*it % 2 == 0)
        {
            d1.push_back(*it);
        }
    }
    for (it = l1.begin(); it != l1.end(); it++)
    {
        if (*it % 2 != 0)
        {
            d1.push_back(*it);
        }
    }
    for (x = d1.begin(); x != d1.end(); x++)
    {
        cout << *x << " ";
    }
    return 0;
}