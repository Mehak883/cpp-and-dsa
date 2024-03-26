#include<iostream>
using namespace std;
class a{
public:
void publicfunc(){
    cout<<"public of a\n";
}

a(int ae){
        cout<<"\nparent here\n";
}
~a(){
    cout<<"\ndest of a\n";
}
protected:
void protectedfunc(){
    cout<<"protected of a\n";
}
private:
void privatefunc(){
    cout<<"private of a\n";
}
};
class aV2:public a{
public:
void publicfuncav2(){
    cout<<"public of aV2\n";
    publicfunc();
    protectedfunc();
}
aV2(int x):a(6){
    cout<<"\nchild here\n";
};
~aV2(){
    cout<<"\ndest of av2 \n";
}
protected:
void protectedfuncav2(){
    cout<<"protected of av2\n";
}
private:
void privatefuncav2(){
    cout<<"private of av2\n";
}
};
int main(){
    aV2 av(6);
    av.publicfuncav2();
    return 0;
}