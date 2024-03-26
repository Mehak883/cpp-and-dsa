#include<iostream>
#include<array>
#include<tuple>
using namespace std;

int main(){
    array<int,0> a1;
    if(a1.empty()==1){
        cout<<"array is empty";
    }
    else{
        cout<<"array is not empty ";
    }
    return 0;
}