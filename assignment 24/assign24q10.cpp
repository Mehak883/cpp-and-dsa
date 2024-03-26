//10. Write functions using function overloading to add two numbers having different data types.
#include<iostream>
using namespace std;
void add(int a,int b){
    float sum;
    sum = a+b;
    cout<<sum<<endl;
} 
void add(float a,float b){
    float sum;
    sum = a+b;
    cout<<sum;
} 
int main(){
add(3,6);
add(8.4f,2.1f);
    return 0;
}