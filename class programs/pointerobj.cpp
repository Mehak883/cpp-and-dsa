#include<iostream>
using namespace std;
class pointero{
int a,b,sum0,sum1;
public:
void setdata(int a,int b){
    this->a=a;
    this->b=b;
}
pointero sum(pointero p){
sum0=a+b;
sum1=p.a+p.b;
if((a+b)>(p.a+p.b))
return *this;
else
return p;
}
void showdata(){
    cout<<a<<endl;
    cout<<b;
}
};
// pointero input(pointero *p){
// int x,y;
// cout<<"enter 2 no : ";
// cin>>x>>y; 
// p->setdata(x,y);
// return *p;
// }
int main(){
    pointero *p;
    pointero c1,c2,c3,c4,c5;
    p=new pointero;
    p->setdata(8,4);
    p->showdata();
// c2=input(&c1);
// c2.showdata();
// c3=c1.sum(c2);
c3.setdata(6,7);
c4.setdata(4,5);
c5=c3.sum(c4);
c5.showdata();
    return 0;
}