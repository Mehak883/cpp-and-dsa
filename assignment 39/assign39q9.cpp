#include<bits/stdc++.h>
using namespace std;

int main()
{
    forward_list<int> f2={3,5,7,8,8};
    forward_list<int> f1 = { 4, 9 };

int a;
    forward_list<int>::iterator x;
//     for(int i=1;i<=4;i++)
//     {
//         cin>>a;
// f2.push_front(a);
//     }
    cout<<"\n\n";
    
    f1.splice_after(f1.begin(),f2,f2.begin(),f2.end());
    for (x = f2.begin(); x != f2.end(); x++)
    {
        cout << *x << "  ";
    }
    cout<<"\n\n";
        for (x = f1.begin(); x != f1.end(); x++)
    {
        cout << *x << "  ";
    }
    
    return 0;
}
