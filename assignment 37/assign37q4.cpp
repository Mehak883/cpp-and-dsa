#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int>::iterator x;
    vector<int> v1;
    v1.swap(v);
    for (x = v1.begin(); x != v1.end(); x++)
    {
        cout << *x << " ";
    }
    return 0;
}