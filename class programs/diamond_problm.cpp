#include<iostream>
using namespace std;
class A{
public:
int a;
// A(){
//  '[]   cout<<"dc \n";
// }
A(int a){
this->a=a;
cout<<"pc pc called \n";
cout<<a<<endl;
}
};
class B:public A{
public:
// B():A(6){
// cout<<"dc dc called \n";
// }
B(int a,A):A(a){
    cout<<"pa dc called der\n";
cout<<a<<endl;
}
};
int main(){
   
   B b(6,7);
    return 0;
}
// #include<iostream>
// using namespace std;
// class A{
// public:
// A(){
//     cout<<"a() called"<<endl;
// }
// void get(){
//     cout<<"hi\n";
// }
// };
// class B : virtual public A{ 
//     public:
//     B():A(){
//         cout<<"B() called"<<endl;
//     }
//     void get(){
//         cout<<"hlo";
//     }
// };
//  class C :virtual public A{
// public:
// C(): A(){
//     cout<<"c() called"<<endl;
// }
// };
// class D:public C,public B{
// public :
// D():C(),B(){
//     cout<<"d() called"<<endl;
// }
// };
// int main(){
//   D d1;  
//   B b1;
//   b1.get();
//     return 0;
// }