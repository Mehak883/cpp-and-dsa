



// #include<iostream>
// using namespace std;
// class A{
//     private :
//     int y;
//     protected:
//     int z;
//     public :
//     int x;
//     A(){
//       x=1;y=2;z=3;
//     }
// };
// // class B:public A{
// //   public :
// //   void display(){
// //     cout<<x<<y<<z<<endl;
// //   }
// // };
// // class C:protected A{
// //   public :
// //   void display(){
// //     cout<<x<<z<<endl;
// //   }
// // };
// class D:private  A{
//   public :
//   void display(){
//     cout<<x<<z<<endl;
//   }
// };
// int main(){
//   D b;
//   b.display();
//   return 0;
// }
#include<iostream>
using namespace std;
class base {
public:
virtual void func()=0;
};
class der:public base{
    public:
    void func(){
        cout<<"emehuj\n";
    }
};
int main(){
    base *b;
    der d1;
    b=&d1;
  b->func();  
    return 0;
}
// #include<iostream>
// using namespace std;
// class fact{
// public:
//     int f,factorial;
// };
// int operator!(){
//         f=1;
//     for(int i=0;i<5;i++){
// f=f*i;
//     }
// return f;
// }

// int main(){
// fact f1;
// !f1;

//     return 0;
// }
// #include<iostream>
// using namespace std;
// class A{
//     public :
//     int a;
// };
// class B {
//     public:
//     int a;
// };
// class C :public A,public B{
//     public:
//     int c;
// };
// int main(){
//     B b1;
//     C c1;
//     c1.a=3;
//     return 0;
// }



// #include<iostream>
// using namespace std;
// class abc{
// int x;
//     public:
//     // abc(){
//     //     x=0;
//     // }
// abc(int k=3){
//     x=k;
// }
// void change(){
//     x=7;
// }
// abc(abc &c){
// x=c.x;
// }
// void display(){
//     cout<<x<<endl;
// }
// };
// int main(){
//     abc a1(9);
// a1.display();
// abc &a2=a1;
// a2.display();
// a2.change();
// a1.display();
// a2.display();
//     return 0;
// }