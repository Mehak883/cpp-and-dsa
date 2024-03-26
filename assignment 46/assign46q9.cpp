// 9. Given two maps map1 and map2 having a string as the key and arrays of integers as values, the task is to merge them in one map such that 
// if a key is common in both the maps, the respective arrays should be merged.
// Example:
// Input: map1 = { (“key1”, {0, 1}), (“key2”, {0, 1}) }, map2 = { (“key2”, {1, 2}) };
// Output: { (key1, {0, 1}), (key2, {0, 1, 2}) }
// Explanation: After merging key1 array will become {0, 1} and for key2 after merging array will become {0, 1, 2}
#include<iostream>
#include<map>
#include<iterator>
using namespace std;
map<string,array<int,10>> make(){
    string key;
     map<string,array<int,10>>m1;
    int n,arr[10];
 for(int i=0;i<2;i++){
        cout<<"enter key and value : ";
        cin>>key;
        cout<<"num of elements of array -> ";
        cin>>n;
        for(int j=0;j<n;j++){
            cin>>arr[j];
            m1[key][arr[j]];
        }
    }
    return m1;
}
void show(map<string,array<int,10>>m1){
map<string,array<int,10>>::iterator it;
 for(it=m1.begin();it!=m1.end();it++){
        cout<<it->first<<"  ";
        for(int i=0;i!=m1[it->second].size())
    }

}
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