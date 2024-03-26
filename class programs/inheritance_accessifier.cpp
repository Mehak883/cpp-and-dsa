#include<iostream>
using namespace std;
class A{

public:
void fun1(){
    cout<<"fun1 public of class A \n";
}
protected:
void fun2(){
    cout<<"fun2 protected of A \n";
}
private:
void fun3(){
    cout<<"fun 3 private of class A\n";
}

};
class B:protected A{
public:
void checkprotectd(){
    fun2();
    fun1();
}
};
 class C:public B{
 public:
 void ccheck(){
 fun1();
 fun2();
 }
} ;
int main(){
A a;
B b;
a.fun1();
//b.fun1();
C c;

b.checkprotectd();
c.checkprotectd();
    return 0;
}