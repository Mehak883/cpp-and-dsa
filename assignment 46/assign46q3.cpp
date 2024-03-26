//3. Create a map, insert some pairs and print all elements in reverse order using rbegin and rend function.
#include<iostream>
#include<map>
#include<iterator>
using namespace std;

int main(){
    map<int,int>m1;
    int key,value;
    for(int i=0;i<6;i++){
        cout<<"enter key and value : ";
        cin>>key;
        cin>>value;
        m1[key]=value;
    }
    for(auto it=m1.rbegin();it!=m1.rend();it++){
        cout<<it->first<<"  "<<it->second<<endl;
    }
    return 0;
}