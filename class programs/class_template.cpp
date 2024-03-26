#include<iostream>
using namespace std;
template <class T1=int,class T2=int,class T3=int>
class Multi{
public:
T1 x;
T2 y;

T3 mutiply(){
    return x*y;
}
};


int main(){
  Multi<> m1;
m1.x=5;
m1.y=1.1;
cout<<"x*y : "<<m1.mutiply();
    return 0;
}
