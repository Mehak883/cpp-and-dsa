#include <iostream>
#include <forward_list>
#include <iterator>
using namespace std;

int main()
{
    forward_list<int> f1={1,2,3,4,5};
    forward_list<int>::iterator x;
    for (x = f1.begin(); x != f1.end(); x++)
    {
        cout << *x << "  ";
    }
    return 0;
}