//5. Make a c++ program to insert unique element in set
#include <iostream>
#include <set>
#include<iterator>
using namespace std;

int main()
{
    multiset<int> s1;
    multiset<int> ::iterator it;
    int i = 0, a,flag=0;
    for (i = 0; i < 6; i++)
    {
        cin>>a;
        if(s1.count(a)==0){
            s1.insert(a);
        }
    }
    for (auto it : s1)
    {
        cout << it << "  ";
    }
    return 0;
}