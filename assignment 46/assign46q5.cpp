//5. Create a map, insert some pairs and Find the occurrence of each pair and print it on the screen.
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
       for(it=m1.begin();it!=m1.end();it++){
        cout<<m1.count(it->first)<<endl;
    }
    
    return 0;
}