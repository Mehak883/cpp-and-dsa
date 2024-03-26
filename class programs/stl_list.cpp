#include<iostream>
#include<list>
#include<iterator>
using namespace std;

int main(){
    int x;
    list<int> l1;
    for(int i=0;i<5;i++){
        // cin>>x;
        // l1.push_back(x);
        l1.push_back(i*10);
    }
    l1.push_front(1);
    //reverse the whole list
    l1.reverse();
    l1.sort();
    cout<<"front : "<<l1.front()<<endl;
     cout<<"end : "<<l1.back()<<endl;
     cout<<"front : "<<l1.front()+2<<endl;
     l1.pop_front();
      cout<<"front : "<<l1.front()<<endl;
      l1.pop_back();
 cout<<"end : "<<l1.back()<<endl;
 //delete particular element 
    l1.remove(20);
    list<int>::iterator it;
    cout<<sizeof(*it)<<endl;
    for(it=l1.begin();it!=l1.end();it++){
cout<<*it<<" ";
    }

    return 0;
}