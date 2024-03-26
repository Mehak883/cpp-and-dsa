//3. Using the concept of pointers, write a function that swaps the private data values of two objects of the same class type.
#include<iostream>
using namespace std;
class one{
int a;
public:
one(){};
one(int x){
    this->a=x;
}
void display(){
    cout<<a<<endl;
}
};
int main(){
    one *a,*aa,*ab;
    one a1(3),a2(4);
a=&a1;
aa=&a2;
a->display();
aa->display();
ab=a;
a=aa;
aa=ab;
a->display();
aa->display();
    return 0;
}