//3. Erase an element from a set.
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
    s1.erase(4);
    for (auto it : s1)
    {
        cout << it << "  ";
    }

    return 0;
}