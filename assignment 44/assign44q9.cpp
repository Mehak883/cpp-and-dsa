//9. Converting String into Set in C++ STL
#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<char> s1;
    int i = 0;
    char a;
    string s="mehak";
    for (i = 0; i!=s.length(); i++)
    {
       a= s.at(i);
        s1.insert(a);
    }
    for (auto it : s1)
    {
        cout << it << "  ";
    }
    return 0;
}