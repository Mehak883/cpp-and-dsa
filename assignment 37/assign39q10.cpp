#include<iostream>
#include<vector>
#include<iterator>
#include<tuple>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v;
    vector<int> ::iterator x;
    int a;
    cout<<"enter 6 element : ";
    for(int i=0;i<=6;i++){
    cin>>a;
    v.push_back(a);
    }
    cout<<" elements are : ";
    for(x=v.begin();x!=v.end();x++){
        cout<<*x<<"  ";
    }
a=count(v.begin(),v.end(),4);
if(a!=0){
    cout<<"element exist ";
}
    else{
        cout<<"not exist ";
    }

    return 0;
}