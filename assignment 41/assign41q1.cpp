// 1. Create a stack of int type, push 5 elements in it and print it on the console screen.
#include <iostream>
#include <stack>
#include <iterator>
using namespace std;

int main()
{
    stack<int> s1;
    // stack<int>:: iterator it;
    int a;
    for (int i = 0; i < 5; i++)
    {
        cin >> a;
        s1.push(a);
    }
    for (int i = 0; i < 5; i++)
    {
        cout << s1.top()<<"  ";
        s1.pop();
    }
    return 0;
}