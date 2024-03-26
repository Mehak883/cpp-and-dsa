// 2. Using inbuilt function and insert an element to the set container.
#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s1;
    int i = 0, a;
    for (i = 0; i < 6; i++)
    {
        cin >> a;
        s1.insert(a);
    }
    for (auto it : s1)
    {
        cout << it << "  ";
    }
    return 0;
}