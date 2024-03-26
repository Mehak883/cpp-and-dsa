// 7. Sort a given map in descending order based on values instead of keys in C++ STL.
// Key value
// 1 6
// 2 8
// 6 3
// 8 2
#include<iostream>
#include<map>
#include<iterator>
#include<algorithm>
using namespace std;

int main(){
    map<int,int>m1,m2;
    map<int,int> ::iterator it,it1;
    int key,value;
    for(int i=0;i<6;i++){
        cout<<"enter key and value : ";
        cin>>key;
        cin>>value;
        m1[key]=value;
    }
    for(it=m1.begin();it!=m1.end();it++){
        cout<<it->first<<"  "<<it->second<<endl;
        m2[it->second]=it->first;
    }
    int c=0;
    for(auto i=m2.rbegin();i!=m2.rend();i++){
        cout<<i->second<<"  "<<i->first<<endl;
    }
    return 0;
}
