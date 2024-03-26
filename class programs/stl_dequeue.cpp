#include <iostream>
#include <deque>
#include <iterator>

using namespace std;

int main()
{
    deque<int> d;
    deque<int>::iterator x;
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_front(4);
    d.push_back(5);
for(x=d.begin();x!=d.end();x++){
    cout<<*x<<" ";
}
cout<<"\nsize : "<<d.size();
cout<<"\nmaxsize : "<<d.max_size();

cout<<endl;
cout<<"front : "<<d.front();
cout<<"\nat() : "<<d.at(3)<<endl;
d.pop_back();
cout<<"\nsize after pop : "<<d.size()<<endl;
cout<<"back : "<<d.back();

    return 0;
}