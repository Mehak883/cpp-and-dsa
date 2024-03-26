#include<iostream>
using namespace std;
class base{
public:
virtual void printbase(){
    cout<<"base func call\n";
}
};
class derived:public base{
public:
void printbase(){
    cout<<" modified base func call\n";
}
void printderieved(){
    cout<<"derived func 2 call\n";
}

};
int main(){
  base *b;
  derived *d;
  base obj1;
  derived obj2;
  b=&obj1;  
  b->printbase();
  d=&obj2;
  d->printderieved();
  d->printbase();
  b=&obj2;
  b->printbase();
  //b->printderived    error
 // d=&obj1;   error 
    return 0;
}