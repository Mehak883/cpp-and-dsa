//4. Define a class Addition that can add 2 or 3 numbers of different data types using function overloading.
#include<iostream>
using namespace std;
class addition{
public:
void add(int a,int b){
    cout<<"summ of 1 : "<<a+b<<endl;
}
void add(int a,int b,int c){
    cout<<"summ of 2 : "<<a+b+c<<endl;
}
void add(float a,float b){
    cout<<"summ of 3 : "<<a+b<<endl;
}


};
int main(){
    addition a1;
    a1.add(3,5);
    a1.add(2,4,5);
    a1.add(4.6f,7.2f);
    return 0;
}