// 4. Create Product class and convert Product type to Item type using casting operator
// int main()
// {
// Item i1;
// Product p1;
// p1.setData(3,4);
// i1=p1;
// return 0;
// }
#include<iostream>
using namespace std;
class item{
int a;
public:
item(){
    a=0;
    cout<<"\ndc\n";
};
item(int a){
this->a=a; 
cout<<" \npc\n";
}

void getdata(){
    cout<<"a = "<<a<<endl;
}
};
class product{
int a,b,c;
    public:
void setdata(int x,int y){
a=x;
b=y;
}
void pro(){
    c=a*b;
}
operator int(){
    return c;
}
operator item(){

    return c;
}
};
int main(){
    item i1;
    product p1;
    p1.setdata(4,6);
    p1.pro();
i1=p1;
i1.getdata();
    return 0;
}