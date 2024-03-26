//2. Create a stack of int type, and find the top most element in a stack.
#include <iostream>
#include <stack>
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
    
        cout << s1.top()<<"  ";
      
    return 0;
}