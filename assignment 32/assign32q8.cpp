//8. Write a C++ program to find the factorial of a number using copy constructor
#include<iostream>
using namespace std;
class my{
    int num;
public:
my(int num){
   this-> num=num;
}
my(my &m){
    int fact=1;
for(int i=1;i<=m.num;i++){
fact=fact*i;
}
cout<<"fact of "<<m.num<<" is "<<fact;
}
};
int main(){
 my m(6);
 my m1=m;   
    return 0;
}