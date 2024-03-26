#include <iostream>
#include <array>
#include <tuple>
using namespace std;
int main()
{
    int i = 0;
    array<int, 6> ar;
    for (i = 0; i <ar.size(); i++)
    {
        cin >> ar[i];
    }
    for (i = 0; i < ar.size(); i++)
    {
        cout << ar.at(i) << " ";
    }
    return 0;
}