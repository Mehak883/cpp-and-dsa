// 11. How to get the first and last elements of Deque in c++?
#include <iostream>
#include <iterator>
#include <deque>
using namespace std;

int main()
{
    deque<int> q1;
    deque<int>::const_iterator it;
    int a;
    for (int i = 0; i <= 5; i++)
    {
        cin >> a;
        q1.insert(q1.begin() + i, a);
    }
    cout << "FIRST ELEMENT = " << q1.front();
    cout << "\nLAST ELEMENT = " << q1.back();
    return 0;
}