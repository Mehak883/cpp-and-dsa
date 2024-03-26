#include <iostream>
#include <array>
#include <tuple>
using namespace std;
int main()
{
    array<int, 5> a1;
    int i;
    for (i = 0; i < a1.size(); i++)
    {
        cin >> a1[i];
    }
    for (auto p = a1.rbegin(); p < a1.rend(); p++)
    {
        cout << *p << "  ";
    }
    cout<<"\n";
     for (auto p = a1.rend()-1; p >= a1.rbegin(); p--)
    {
        cout << *p << "  ";
    }
    return 0;
}