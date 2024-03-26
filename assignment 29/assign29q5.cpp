//5. Create two classes Invent1 and Invent2 and also add necessary constructors in it. Now add functions 
//to support Invent1 to float and Invent1 to Invent2 type.
// Example -
// int main()
// {
// Invent1 s1=(4,5);
// Invent2 d1;
// float tv;
// tv=s1;
// d1=s1;
// return 0;
// }
#include<iostream>
using namespace std;
class invent2{
    int a;
public:
invent2(){
a=0;
}
invent2(int a){
    this->a=a;
}
void disp(){
    cout<<"a = "<<a;

}
};
class invent1{
int a,b;
public:
invent1(){};
invent1(int a,int b){
    this->a=a;
    this->b=b;
}

operator float(){
    return a; 
}
operator invent2(){

    return a;
}
};
int main(){
    invent1 s1(4,5);
  invent2 d1;
    float tv;
    tv=s1;
cout<<"tv = "<<tv;
d1=s1;
d1.disp();
    return 0;
}