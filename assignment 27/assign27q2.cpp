//2. Write a C++ program to overload unary operators that is increment and decrement.
#include<iostream>
using namespace std;
class check{
int count;
public:
void set(int x){
count=x;
}
check operator++(){
check temp;
temp.count=++count;
return temp;
}
check operator--(){
check temp;
temp.count=--count;
return temp;
}
void get(){
    cout<<count<<endl;
}
};
int main(){
    check c1,c2,c3;
    c1.set(5);
    c1.get();
    c2=++c1;
    c2.get();
    c3=--c1;
    c3.get();
    return 0;
}