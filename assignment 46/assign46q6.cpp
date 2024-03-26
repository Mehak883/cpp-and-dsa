//6. Create a map, use a member function to tell whether a map is empty or not and then insert some pairs into the map and find the size of 
//map.
#include<iostream>
#include<map>
#include<iterator>
using namespace std;

int main(){
    map<int,int>m1;
    map<int,int> ::iterator it;
    int key,value;
    if(m1.empty()==1){
        cout<<"no element in map";
    }
    else{
        cout<<"element in map";
    }
    for(int i=0;i<6;i++){
        cout<<"enter key and value : ";
        cin>>key;
        cin>>value;
        m1[key]=value;
    }
    for(it=m1.begin();it!=m1.end();it++){
        cout<<it->first<<"  "<<it->second<<endl;
    }
    cout<<"\nsize of map = "<<m1.size();
    return 0;
}