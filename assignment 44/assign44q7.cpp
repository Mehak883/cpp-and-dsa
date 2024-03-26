//7. how to find the upper bound of any desired element from the set.
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
    cout<<"\n\n";
   cout<<*s1.upper_bound(2);
    return 0;
}