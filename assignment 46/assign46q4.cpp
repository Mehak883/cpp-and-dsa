//4. Create a map, and insert some pairs and find one pair out of the inserted pair and replace it with another pair and print map.
#include<iostream>
#include<map>
#include<iterator>
using namespace std;

int main(){
    map<int,int>m1;
    map<int,int> ::iterator it;
    int key,value;
    for(int i=0;i<6;i++){
        cout<<"enter key and value : ";
        cin>>key;
        cin>>value;
        m1[key]=value;
    }
    for(it=m1.begin();it!=m1.end();it++){
        cout<<it->first<<"  "<<it->second<<endl;
    }
    m1.erase(m1.find(3));
      cout<<"enter key and value : ";
        cin>>key;
        cin>>value;
           m1[key]=value;
     for(it=m1.begin();it!=m1.end();it++){
        cout<<it->first<<"  "<<it->second<<endl;
    }
    return 0;
}