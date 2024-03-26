#include <iostream>
#include <array>
#include <tuple>
using namespace std;

int main()
{
    array<int, 5> a1;
    int i = 0;
    for (i = 0; i < a1.size(); i++)
    {
        cin >> a1[i];
    }
    cout << "first element : " << a1.front();
    cout << "last element  : " << a1.end();
    return 0;
}