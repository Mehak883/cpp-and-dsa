// 9. Write functions using function overloading to find a maximum of two numbers and both the numbers can 
//be integer or real.
#include<iostream>
void add(int ,int );
void add(int ,float );
using namespace std;
int main(){
    int l,b,ba;
    float h;
    l=5,b=2;
    add(l,b);
    ba=10,h=15.12f;
    add(ba,h);
    return 0;
}
void add(int l,int b){                 //both arguments are int 
     int big;
     big=l>b?l:b;
     cout<<"Big is:"<<big<<endl;
}
void add(int b,float h){              //both arguments are real
    float big;
    big=b>h?b:h;
    cout<<"big is:"<<big<<endl;
}