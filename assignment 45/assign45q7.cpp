//7. Create a c++ program using multiset and removes all the elements from the multiset –> O(n)
#include <iostream>
#include <set>
#include <iterator>
using namespace std;
int main()
{
    multiset<int> m1;
    multiset<int>::iterator it;

    int a;
    for (int i = 0; i < 5; i++)
    {
        cin >> a;
        m1.insert(a);
    }
    m1.clear();
    if(m1.empty()){
        cout<<"yess";
    }
    else{
        cout<<"no";
    }
    return 0;
}