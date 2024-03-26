#include <iostream>
#include <list>
#include <iterator>
using namespace std;

int main()
{
    list<int> l1,l2;
    list<int>::iterator i;
    l1.assign(4,100);
    l2.assign(l1.begin(),l1.end());
    for(i=l1.begin();i!=l1.end();i++){
        cout<<*i<<"  ";
    }
    cout<<"\n";
    for(i=l1.begin();i!=l1.end();i++){
        cout<<*i<<"  ";
    }
    return 0;
}