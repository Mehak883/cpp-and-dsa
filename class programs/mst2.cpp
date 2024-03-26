#include<iostream>
using namespace std;
class base{
public:
virtual void func(){
    cout<<"base \n";
}
};
class derived:public base{

void func(){
    cout<<"derived\n";
}
};
int main(){
 base *b1;
derived d;
b1=&d;

b1->base::func();
    return 0;
}                                                                                                                                                        