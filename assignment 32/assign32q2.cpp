// 2. Define a class Rectangle and overload area function for different types of data type.
#include<iostream>
using namespace std;
class rectangle{
public:

void area(int l,int b){
cout<<"area of rect a : "<<l*b<<endl;
}
void area(float l,float b ){
   cout<<"area of rect b : "<<l*b<<endl; 
}
void area(float l,int b){
    cout<<"area of rect c : "<<l*b<<endl;
}

};
int main(){
    rectangle r1;
    r1.area(4,7);
    r1.area(3.6f,8.1f);
r1.area(2.5f,2);
    return 0;
}