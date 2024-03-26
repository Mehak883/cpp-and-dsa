//1. Create a map, insert at least 5 pairs of keys and values and print it.
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
    return 0;
}
// #include<iostream>
// using namespace std;

// int main(){
//    auto sum=[](auto a,auto b){
//     cout<<(a+b);
//     };
//     sum(3,5);
//     sum(7,2);
//     return 0;
// }