#include <iostream>
#include <set>
#include <iterator>
using namespace std;

int main()
{
    // multiset<int, greater<int>> s;   //print repeated element too but give sorted elements
    set<int,greater<int>> s;   //cant repeat element and give sorted and
    s.insert(1);
    s.insert(9);
    s.insert(3);
    s.insert(4);
    s.insert(4);
    s.insert(10);
    s.insert(6);
    s.insert(2);
    set<int> s2(s.begin(),s.end());
    set<int, greater<int>>::iterator x;
    for (x = s.begin(); x != s.end(); x++)
    {
        cout << *x << " ";
    }
cout<<"\n\n";
    for (x = s2.begin(); x != s2.end(); x++)
    {
        cout << *x << " ";
    }
    return 0;
}