#include<iostream>
using namespace std;
class A{
public:
void printx(){
    cout<<"printX of A"<<endl;

}

};
class B{
public :
void printx(){
cout<<"printX of b"<<endl;
}
};
class c:public A,public B{


};
int main(){
  c c1;
  c1.A::printx();
  c1.B::printx();  
    return 0;
}