// 2. Create a railways ticket counter and allot ticket to first come first take using c++ STL
#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> q1;
    int i;
    for (i = 0; i <= 10; i++)
    {
        q1.push(i);
    }
    i=0;
    while (!q1.empty())
    {
        i++;
        cout << "\nticket done -> ";
cout<<q1.front();
        q1.pop();
    }
    return 0;
}