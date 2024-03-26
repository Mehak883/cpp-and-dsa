//3. Define a base class Animals having member function sound() . Define another derived class from Animals class named Dogs. You need
// to override the sound function of the base class in the derived class.
#include<iostream>
using namespace std;
class animal{
public:
virtual void sound(){
cout<<"sound of animal";
}
};
class dog:public animal{
public:
void sound(){
    cout<<"bow-bow "<<endl;
}
};
int main(){
    animal *a;
    dog d;
    a=&d;
    a->sound();
    return 0;
}