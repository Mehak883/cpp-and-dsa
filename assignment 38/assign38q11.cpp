#include <iostream>
#include <list>
#include<array>
#include <iterator>
using namespace std;

int main()
{
    int a1[4];
    list<int> l1;
    list<int>::iterator x;
    int n;
        cout << "enter element : ";
    for (int i = 0; i < 4; i++)
    {
      cin>>a1[i];
    }
    l1.assign(a1, a1+4);
    for (x = l1.begin(); x != l1.end(); x++)
    {
        cout << *x << "  ";
    }
    return 0;
}