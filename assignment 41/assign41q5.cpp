// 5. Create stack1 of int type, and create another stack of the same type with name tack2 and copy all the elements of stack1 into
//  stack2 in the same order.
#include <iostream>
#include <stack>
using namespace std;

int main()
{
    cout<<"kavya\n";
    stack<int> s1,s2;
    int a;
    cout<<"enter elements in first stack : ";
    for (int i = 0; i < 5; i++)
    {
        cin >> a;
        s1.push(a);
    }
     cout<<"enter elements in second stack : ";
     s2.swap(s1);
    while (!s2.empty())
    {
        cout << s2.top() << "  ";
        s2.pop();
    }
    return 0;
}