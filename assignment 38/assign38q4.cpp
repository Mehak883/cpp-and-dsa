#include<iostream>
#include <list>
#include <iterator>
using namespace std;

int main(){
    list<int> l1;
    list<int>::iterator i,x;
l1.push_back(3);
l1.push_back(4);
l1.push_back(5);
l1.push_back(6);
i=l1.begin();
x=l1.end();
    for(i;i!=x;i++){
        cout<<*i<<"  ";
    }
    return 0;
}