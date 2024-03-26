// 1. Declare a vector without Initialization and print the elements.
#include<iostream>
#include<vector>
#include<iterator>
#include<tuple>
using namespace std;

int main(){
    vector<int> v={2,3,4,5};
    vector<int> ::iterator x;
    int a;
    cout<<" elements are : ";
    for(x=v.begin();x!=v.end();x++){
        cout<<*x<<"  ";
    }
    return 0;
}