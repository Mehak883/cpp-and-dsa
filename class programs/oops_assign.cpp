#include<iostream>
using namespace std;
class inc{
int a;
public:
inc(){};
inc(int a){
    this->a=a;
}
int operator++(){

a=++a;
return a;
}
int operator++(int dummy){

a=a++;
return a;
}
};
int main(){
    inc i(7);
    cout<<++i<<endl;
    cout<<i++;
    return 0;
}