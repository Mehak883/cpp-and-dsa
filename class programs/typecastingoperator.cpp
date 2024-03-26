#include<iostream>
using namespace std;
class complex{
int r,i;
public:
complex(int x){
    r =x;
    i= x;
}
complex(){};
void display(){
    cout<<r<<" + i "<<i<<endl;
}
};
int main(){
complex c;
c=5;   
c.display(); 
    return 0;
}