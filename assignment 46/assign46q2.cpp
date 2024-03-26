//2. Create a map, where insert keys and values as string type and integer type respectively and print it on the screen.
#include<iostream>
#include<map>
#include<iterator>
using namespace std;

int main(){
    map<string,int>m1;
    map<string,int> ::iterator it;
    string key;
    int value;
    for(int i=0;i<6;i++){
        cout<<"enter key and value : ";
        cin>>key;
        cin>>value;
        m1[key]=value;
    }
    for(it=m1.begin();it!=m1.end();it++){
        cout<<it->first<<"  "<<it->second<<endl;
    }
    return 0;
}