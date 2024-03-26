// 11. Creating a list by assigning the all elements of another list C++ STL
#include <iostream>
#include <list>
#include <iterator>
using namespace std;

int main()
{
    list<int> l1, l2;
    list<int>::iterator x;
    int n;
    for (int i = 0; i <= 6; i++)
    {
        cout << "enter element : ";
        cin >> n;
        l1.push_back(n);
    }
    l2.assign(l1.begin(), l1.end());
    for (x = l1.begin(); x != l1.end(); x++)
    {
        cout << *x << "  ";
    }
    return 0;
}