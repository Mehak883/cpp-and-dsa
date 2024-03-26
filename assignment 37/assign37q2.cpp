// 1. Declare a vector with Initialization and print the elements.
#include<iostream>
#include<vector>
#include<iterator>
#include<tuple>
using namespace std;

int main(){
    vector<int> v;
    vector<int> ::iterator x;
    int a;
    x=v.begin();
    cout<<"enter 6 element : ";
    for(int i=0;i<=6;i++){
    cin>>a;
    x=v.begin()+i;
    v.insert(x,a);
    }
    for(x=v.begin();x!=v.end();x++){
        cout<<*x<<"  ";
    }
    return 0;
}