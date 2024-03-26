#include <iostream>
#include <forward_list>
#include <iterator>
using namespace std;

int main()
{
    forward_list<int> f1;
    forward_list<int>::iterator x;
    f1.assign({4, 5, 6, 7, 8, 9});
    for (x = f1.begin(); x != f1.end(); x++)
    {
        cout << *x << "  ";
    }
    return 0;
}