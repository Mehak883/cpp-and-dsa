//8. Create a function to search the element in the set.
#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s1;
    int i = 0, a;
    for (i = 0; i < 7; i++)
    {
        cin >> a;
        s1.insert(a);
    }
    for (auto it : s1)
    {
        cout << it << "  ";
    }
    cout<<"\n\n";
if(*s1.find(4)==4){
    cout<<"yess";
}
else{
    cout<<"no";
}
    return 0;
}