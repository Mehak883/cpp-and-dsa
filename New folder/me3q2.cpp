#include<iostream>
using namespace std;
class a{
public:
a(){
        cout<<"\nparent here\n";
}
~a(){
    cout<<"\ndest of parent class\n";
}
};
class aV2:public a{
public:

aV2():a(){
    cout<<"\nchild here\n";
};
~aV2(){
    cout<<"\ndest of child class \n";
}

};
int main(){
    aV2 av;
 
    return 0;
}