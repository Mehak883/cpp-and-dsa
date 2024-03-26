#include <iostream>
#include <string.h>
using namespace std;
class add
{
    int a;

public:
 virtual void enterdata(){
    cout<<"enter a : ";
    cin>>a;
 }
   virtual  add operator+=(add a1)
    {
            
        a = a + a1.a;
        return *this;
    }
    virtual void display()
    {
        cout << a<<endl;
    }
};
class add_s:public add
{
    char s[10];

public:
 void enterdata(){
    cin.getline(s,10);
 }
    void operator+=(add_s s1)
    {
        cout<<"hello";
        strcat(this->s, s1.s);
    cout<<this->s;
    }
   
};
int main()
{
add *p,*q;
add_s a1,a2,a3;
p=&a1;
q=&a2;
p->enterdata();
q->enterdata();
 *p+=*q;

    return 0;
}